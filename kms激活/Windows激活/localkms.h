#include <windows.h>
#include <stdio.h>
#include <string>

//函数引用
void red();
void green();
void blue();
void xpr();
void ipk(const char* cn);
void skms(const char* ln);
void kms(const char* zn);

//--------------------------正文------------------------------------
void RegistryKey() {
    HKEY hKey;
    LPCSTR subKey = "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\SppExtComObj.exe";
    LPCSTR valueName = "Debugger";
    LPCSTR valueData = "rundll32.exe SECOPatcher.dll,PatcherMain";

    // 创建注册表项
    long createResult = RegCreateKeyEx(HKEY_LOCAL_MACHINE, subKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL);

    if (createResult == ERROR_SUCCESS) {
        // 设置注册表值
        long setValueResult = RegSetValueEx(hKey, valueName, 0, REG_SZ, (const BYTE*)valueData, strlen(valueData) + 1);

        if (setValueResult == ERROR_SUCCESS) {
            green();
            printf("成功\n");
            blue();
        }
        else {
            red();
            printf("失败\n");
            blue();
        }

        // 关闭注册表项
        RegCloseKey(hKey);
    }
    else {
        red();
        printf("失败\n");
        blue();
    }

}

void deleteRegistryKey() {
    LPCSTR subKey = "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\SppExtComObj.exe";

    // 删除指定的注册表项
    long deleteResult = RegDeleteKey(HKEY_LOCAL_MACHINE, subKey);

    if (deleteResult == ERROR_SUCCESS) {
        green();
        printf("成功\n");
        blue();
    }
    else {
        red();
        printf("失败\n");
        blue();
    }
}

void copydll()
{
    // 源文件路径，使用相对路径
    char* sourceFilePath = "SECOPatcher.dll";
    // 目标文件路径，使用绝对路径
    char* destinationFilePath = "C:\\Windows\\System32\\SECOPatcher.dll";

    if (Wow64EnableWow64FsRedirection(FALSE)) //关闭重定向至Wow64
    {
        // 使用CopyFile函数来移动文件
        if (CopyFile(sourceFilePath, destinationFilePath, FALSE)) 
        {
            green();
            printf("成功\n");
            blue();
        }
        else 
        {
            red();
            printf("失败\n");
            blue();
        }
    }
    else  if (FALSE == Wow64EnableWow64FsRedirection(TRUE))
    {
        //无法重新启用重定向
        red();
        printf("失败,无法重定向\n");
        blue();
    }
}

void deletedll()
{
    // 使用remove函数来删除文件
    if (Wow64EnableWow64FsRedirection(FALSE)) //关闭重定向至Wow64
    {
        if (!(remove("C:\\Windows\\System32\\SECOPatcher.dll")))
        {
            green();
            printf("成功\n");
            blue();
        }
        else
        {
            red();
            printf("失败\n");
            blue();
        }
    }
    else if (FALSE == Wow64EnableWow64FsRedirection(TRUE))
    {
        red();
        printf("失败,无法重定向\n");
        blue();
    }
}

void kms_server()
{
    green();
    system("vlmcsd.exe -s");
    system("net start \"Key Management Server\"");
    blue();
}

void remove_kms_server()
{
    green();
    system("sc delete vlmcsd");
    blue();
}

void endkms()
{
    printf("\n\n正在清除涉及的注册表操作....");
    deleteRegistryKey();
    printf("正在删除vlmcsd安装的kms服务....");
    remove_kms_server();
    printf("正在移除DLL文件从System32文件夹....");
    deletedll();
    printf("任意键以返回\n");
    system("pause");
}

void loclkms()
{
    printf("移动DLL至System32文件夹....");
    copydll();//移动DLL
    printf("写入注册表....");
    RegistryKey();//写入注册表
    printf("启动kms服务器....\n");
    kms_server();
    printf("\n正在与本地Kms服务器进行绑定\n");
    skms("10.0.0.1:1688");//绑定本地服务器
    //第二阶段至最后阶段
    char se[50];
    printf("\n第二阶段\n");
    printf("密钥格式XXXXX-XXXXX-XXXXX-XXXXX-XXXXX\n");
    printf("\t\t   请输入KMS激活密钥:");
    scanf("%s", se);
    printf("\n第三阶段：正在安装激活密钥...\n");
    std::string my = se;
    ipk(my.c_str());
    printf("\n最后阶段:正在激活..\n");
    kms("/ato");
    printf("\n检查激活状态\n");
    Sleep(1000);
    xpr();
    printf("\n\n激活结束后回车以清除注册表及dll操作\n");
    system("pause");
    endkms();//激活结束清除注册表及dll操作
    
}
