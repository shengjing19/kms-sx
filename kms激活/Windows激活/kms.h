#include <iostream>
#include <stdio.h>

void kms(const char* zn) 
{
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs ";
    zl += zn;
    FILE* pipe = _popen(zl.c_str(), "r");

    char buffer[128];              //������������д��������
    std::string lastLine;         //�����ڶ�������
    std::string secondLastLine;  //���һ������
    std::string ato = "�ɹ�";
    while (fgets(buffer, 128, pipe) != NULL) 
    {
        secondLastLine = lastLine;
        lastLine = buffer;
    }

    std::string sub_ato;
    if (secondLastLine.size() >= 4)
    {
        sub_ato = secondLastLine.substr(0, 4); //��ȡ�����ַ�
    }

    if (sub_ato == ato) //�ɹ��ļ����� �ɹ���ж���� /ato -upk
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
//----------------------------------��װ��Կ----------------------------------------------------------------------------
void ipk(const char* cn)
{
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs /ipk ";
    zl += cn;
    FILE* pipe = _popen(zl.c_str(), "r");
    char BF[128];              //������������д��������
    std::string ZH;         //�����ڶ�������
    std::string SL;  //���һ������
    std::string jc = "�ɹ�";
    while (fgets(BF, 128, pipe) != NULL)
    {
        SL = ZH;
        ZH = BF;
    }

    std::string sub_str;
    if (SL.size() >= 4)
    {
        sub_str = SL.substr(0, 4); //��ȡ�����ַ�
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
//-------------------------------�󶨷�����--------------------------------------------------------------------
void skms(const char* ln)
{
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs -skms ";
    zl += ln;
    FILE* pipe = _popen(zl.c_str(), "r");
    char BF[128];              //������������д��������
    std::string ZH;         //�����ڶ�������
    std::string SL;  //���һ������
    std::string jc = "��������Ƴɹ�";
    while (fgets(BF, 128, pipe) != NULL)
    {
        SL = ZH;
        ZH = BF;
    }

    std::string sub_str;
    if (SL.size() >= 14)
    {
        sub_str = SL.substr(12, 14); //��ȡ�����ַ�
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
//----------------------------------------��鼤��״̬--------------------------------------------------
void xpr()
{
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs -xpr ";
    FILE* pipe = _popen(zl.c_str(), "r");
    char BF[128];              //������������д��������
    std::string ZH;         //�����ڶ�������
    std::string SL;  //���һ������
    std::string jcj = "�����ü���";
    std::string jcj1 = "��������";
    while (fgets(BF, 128, pipe) != NULL)
    {
        SL = ZH;
        ZH = BF;
    }


    std::string sub_jcj, sub_jcj1;
    if (SL.size() >= 10) 
    {
        sub_jcj = SL.substr(10, 10); //��ȡ�����ַ�
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
//----------------------------------------������ϸ��Ϣ--------------------------------------------------
void dlv()
{
    int line = 0;
    printf("������ϸ��Ϣ\n\n");
    std::string zl = "cscript C:\\Windows\\System32\\slmgr.vbs /dlv ";
    FILE* pipe = _popen(zl.c_str(), "r");
    char BF[628];              //������������д��������
    std::string ZH;           //�����ڶ�������
    std::string SL;          //���һ������
    while (fgets(BF, 128, pipe) != NULL)
    {
        if (line >= 5) // �ӵ����п�ʼ��ȡ
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

