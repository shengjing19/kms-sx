#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void ms(const char* str) {
    int a = 0;
    char s[10] = { "1> jg.txt" };
    std::string command = "ping -n 1 ";
    command += str;
    command += s;
    system(command.c_str());
    std::ifstream file("jg.txt");  // 打开文本文件
    std::string line;
    int lineNumber = 8;  // 要读取的行号
    int startColumn = 10;  // 要读取的起始列
    int endColumn = 15;  // 要读取的结束列

    //检测服务器是否在线
    if (!system(command.c_str()))
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        printf("  在线\t       ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        printf("  离线\t       ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    //检测服务器是否在线end

    //读取服务器延时数据
    if (file.is_open())  
    {//文件打开
        int i=1;
        for(i=1; std::getline(file, line);i++)
        {   
            if (i == lineNumber) 
            {
                 if (startColumn >= 0 && startColumn < line.length() && endColumn <= line.length() && startColumn < endColumn) 
                {
                    std::string extractedString = line.substr(startColumn, endColumn - startColumn);
                    a = 1;
                    printf("%-2s", extractedString.c_str());
                    int num = std::stoi(extractedString);
                    if (num <= 40)
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
                        printf("      ■■■■■");//6个空
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    }
                    else if (num > 40 && num <= 80)
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
                        printf("      ■■■■□");//6个空
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    }
                    else if (num > 80 && num < 100)
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
                        printf("      ■■■□□");//6个空
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    }
                    else if (num >= 100&&num<200)
                    {
                        printf("s");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);//16黄
                        printf("     ■■□□□");//6个空
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    }
                    else if (num >= 200)
                    {
                        printf("s");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
                        printf("     ■□□□□");//6个空
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    }
                }
                else 
                {
                   
                }
                 break;
            }
        }
        file.close();  // 文件关闭
    }
    else 
    {
        printf("文件出错:根目录txt文档出现问题");
    }
    //读取服务器延时数据end


    if (a == 0)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        printf(" 超时");
        printf("      □□□□□");//6个空
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    
    

}
