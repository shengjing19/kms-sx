#include <windows.h>
#include <stdio.h>
#include <string>

//��������
void red();
void green();
void blue();
void xpr();
void ipk(const char* cn);
void skms(const char* ln);
void kms(const char* zn);

//--------------------------����------------------------------------
void RegistryKey() {
    HKEY hKey;
    LPCSTR subKey = "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\SppExtComObj.exe";
    LPCSTR valueName = "Debugger";
    LPCSTR valueData = "rundll32.exe SECOPatcher.dll,PatcherMain";

    // ����ע�����
    long createResult = RegCreateKeyEx(HKEY_LOCAL_MACHINE, subKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL);

    if (createResult == ERROR_SUCCESS) {
        // ����ע���ֵ
        long setValueResult = RegSetValueEx(hKey, valueName, 0, REG_SZ, (const BYTE*)valueData, strlen(valueData) + 1);

        if (setValueResult == ERROR_SUCCESS) {
            green();
            printf("�ɹ�\n");
            blue();
        }
        else {
            red();
            printf("ʧ��\n");
            blue();
        }

        // �ر�ע�����
        RegCloseKey(hKey);
    }
    else {
        red();
        printf("ʧ��\n");
        blue();
    }

}

void deleteRegistryKey() {
    LPCSTR subKey = "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\SppExtComObj.exe";

    // ɾ��ָ����ע�����
    long deleteResult = RegDeleteKey(HKEY_LOCAL_MACHINE, subKey);

    if (deleteResult == ERROR_SUCCESS) {
        green();
        printf("�ɹ�\n");
        blue();
    }
    else {
        red();
        printf("ʧ��\n");
        blue();
    }
}

void copydll()
{
    // Դ�ļ�·����ʹ�����·��
    char* sourceFilePath = "SECOPatcher.dll";
    // Ŀ���ļ�·����ʹ�þ���·��
    char* destinationFilePath = "C:\\Windows\\System32\\SECOPatcher.dll";

    if (Wow64EnableWow64FsRedirection(FALSE)) //�ر��ض�����Wow64
    {
        // ʹ��CopyFile�������ƶ��ļ�
        if (CopyFile(sourceFilePath, destinationFilePath, FALSE)) 
        {
            green();
            printf("�ɹ�\n");
            blue();
        }
        else 
        {
            red();
            printf("ʧ��\n");
            blue();
        }
    }
    else  if (FALSE == Wow64EnableWow64FsRedirection(TRUE))
    {
        //�޷����������ض���
        red();
        printf("ʧ��,�޷��ض���\n");
        blue();
    }
}

void deletedll()
{
    // ʹ��remove������ɾ���ļ�
    if (Wow64EnableWow64FsRedirection(FALSE)) //�ر��ض�����Wow64
    {
        if (!(remove("C:\\Windows\\System32\\SECOPatcher.dll")))
        {
            green();
            printf("�ɹ�\n");
            blue();
        }
        else
        {
            red();
            printf("ʧ��\n");
            blue();
        }
    }
    else if (FALSE == Wow64EnableWow64FsRedirection(TRUE))
    {
        red();
        printf("ʧ��,�޷��ض���\n");
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
    printf("\n\n��������漰��ע������....");
    deleteRegistryKey();
    printf("����ɾ��vlmcsd��װ��kms����....");
    remove_kms_server();
    printf("�����Ƴ�DLL�ļ���System32�ļ���....");
    deletedll();
    printf("������Է���\n");
    system("pause");
}

void loclkms()
{
    printf("�ƶ�DLL��System32�ļ���....");
    copydll();//�ƶ�DLL
    printf("д��ע���....");
    RegistryKey();//д��ע���
    printf("����kms������....\n");
    kms_server();
    printf("\n�����뱾��Kms���������а�\n");
    skms("10.0.0.1:1688");//�󶨱��ط�����
    //�ڶ��׶������׶�
    char se[50];
    printf("\n�ڶ��׶�\n");
    printf("��Կ��ʽXXXXX-XXXXX-XXXXX-XXXXX-XXXXX\n");
    printf("\t\t   ������KMS������Կ:");
    scanf("%s", se);
    printf("\n�����׶Σ����ڰ�װ������Կ...\n");
    std::string my = se;
    ipk(my.c_str());
    printf("\n���׶�:���ڼ���..\n");
    kms("/ato");
    printf("\n��鼤��״̬\n");
    Sleep(1000);
    xpr();
    printf("\n\n���������س������ע���dll����\n");
    system("pause");
    endkms();//����������ע���dll����
    
}
