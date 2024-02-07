#include <stdio.h>

//函数引用
void ms(const char* str);
void skms(const char* ln);

//--------------------------正文------------------------------------
void ser() 
{
	int A;
	system("cls");
	printf("\n");
	printf("第一阶段\n");
	printf("\t\t\t---------------请选择激活服务器-------------------\n");
	printf("\t\t      服务器\t\t  在线状态      延时       信号质量\n");
	printf("\t\t    1:kms.shuax.com  \t");  printf(" ");	ms("kms.shuax.com ");   //ms函数
	printf("\n\t\t    2:kms.dwhd.org  \t");  printf(" "); ms("kms.dwhd.org ");
	printf("\n\t\t    3:kms.luody.info  \t");  printf(" ");	ms("kms.luody.info ");
	printf("\n\t\t    4:kms.digiboy.ir  \t");  printf(" ");	ms("kms.digiboy.ir ");
	printf("\n\t\t    5:www.zgbs.cc  \t"); 	printf(" "); ms("www.zgbs.cc ");
	printf("\n\t\t    6:cy2617.jios.org   ");  printf(" ");	ms("cy2617.jios.org ");
	printf("\n\t\t\t--------------------------------------------------\n");
	printf("请输入：");
	scanf_s("%d", &A);
	//setbuf(stdin, NULL); //清除缓冲区
	switch (A)
	{
	case 1: system("cls"); printf("---正在绑定激活服务器...---\n"); Sleep(1000); skms("kms.shuax.com");  break;  //skms函数
	case 2: system("cls"); printf("---正在绑定激活服务器...---\n"); Sleep(1000); skms("kms.dwhd.org");  break;
	case 3: system("cls"); printf("---正在绑定激活服务器...---\n"); Sleep(1000); skms("kms.luody.info");  break;
	case 4: system("cls"); printf("---正在绑定激活服务器...---\n"); Sleep(1000); skms("kms.digiboy.ir");  break;
	case 5: system("cls"); printf("---正在绑定激活服务器...---\n"); Sleep(1000); skms("www.zgbs.cc");  break;
	case 6: system("cls"); printf("---正在绑定激活服务器...---\n"); Sleep(1000); skms("cy2617.jios.org");  break;
	}
}

