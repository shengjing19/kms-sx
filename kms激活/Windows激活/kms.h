#include <iostream>
#include <stdio.h>

void kms(const char* zn) 
{
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs ";
    zl += zn;
    FILE* pipe = _popen(zl.c_str(), "r");

    char buffer[128];              //将读出的数据写入数组中
    std::string lastLine;         //倒数第二行数据
    std::string secondLastLine;  //最后一行数据
    std::string ato = "成功";
    while (fgets(buffer, 128, pipe) != NULL) 
    {
        secondLastLine = lastLine;
        lastLine = buffer;
    }

    std::string sub_ato;
    if (secondLastLine.size() >= 4)
    {
        sub_ato = secondLastLine.substr(0, 4); //提取部分字符
    }

    if (sub_ato == ato) //成功的激活了 成功的卸载了 /ato -upk
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        printf("%s", secondLastLine.c_str());
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        printf("%s", secondLastLine.c_str());
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    
    _pclose(pipe);
}
//----------------------------------安装密钥----------------------------------------------------------------------------
void ipk(const char* cn)
{
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs /ipk ";
    zl += cn;
    FILE* pipe = _popen(zl.c_str(), "r");
    char BF[128];              //将读出的数据写入数组中
    std::string ZH;         //倒数第二行数据
    std::string SL;  //最后一行数据
    std::string jc = "成功";
    while (fgets(BF, 128, pipe) != NULL)
    {
        SL = ZH;
        ZH = BF;
    }

    std::string sub_str;
    if (SL.size() >= 4)
    {
        sub_str = SL.substr(0, 4); //提取部分字符
    }

    if (sub_str == jc)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        printf("%s\n", SL.c_str());
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        printf("%s\n", SL.c_str());
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    _pclose(pipe);
}
//-------------------------------绑定服务器--------------------------------------------------------------------
void skms(const char* ln)
{
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs -skms ";
    zl += ln;
    FILE* pipe = _popen(zl.c_str(), "r");
    char BF[128];              //将读出的数据写入数组中
    std::string ZH;         //倒数第二行数据
    std::string SL;  //最后一行数据
    std::string jc = "计算机名称成功";
    while (fgets(BF, 128, pipe) != NULL)
    {
        SL = ZH;
        ZH = BF;
    }

    std::string sub_str;
    if (SL.size() >= 14)
    {
        sub_str = SL.substr(12, 14); //提取部分字符
    }


    if (sub_str == jc)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        printf("%s\n", SL.c_str());
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        printf("%s\n", SL.c_str());
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    _pclose(pipe);
}
//----------------------------------------检查激活状态--------------------------------------------------
void xpr()
{
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs -xpr ";
    FILE* pipe = _popen(zl.c_str(), "r");
    char BF[128];              //将读出的数据写入数组中
    std::string ZH;         //倒数第二行数据
    std::string SL;  //最后一行数据
    std::string jcj = "已永久激活";
    std::string jcj1 = "批量激活";
    while (fgets(BF, 128, pipe) != NULL)
    {
        SL = ZH;
        ZH = BF;
    }


    std::string sub_jcj, sub_jcj1;
    if (SL.size() >= 10) 
    {
        sub_jcj = SL.substr(10, 10); //提取部分字符
    }
    if (SL.size() >= 8) 
    {
        sub_jcj1 = SL.substr(4, 8);
    }


    if ((sub_jcj == jcj)||(sub_jcj1 == jcj1))
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        printf("%s\n", SL.c_str());
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        printf("%s\n", SL.c_str());
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    _pclose(pipe);
}
//----------------------------------------激活详细信息--------------------------------------------------
void dlv()
{
    int line = 0;
    printf("激活详细信息\n\n");
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs /dlv ";
    FILE* pipe = _popen(zl.c_str(), "r");
    char BF[628];              //将读出的数据写入数组中
    std::string ZH;           //倒数第二行数据
    std::string SL;          //最后一行数据
    while (fgets(BF, 128, pipe) != NULL)
    {
        if (line >= 5) // 从第六行开始读取
        {
            SL = BF;
            if (line == 5) {
                ZH = SL;
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
            printf("%s", SL.c_str());
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
    line++;
    }
   
    _pclose(pipe);
}

