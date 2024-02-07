#include <stdio.h>
#include <cstdlib>

//函数引用
void xpr();
void kms(const char* zn);
int main();

//----------------------------------其他功能---------------------------------------------------------------//
void qtf1() //卸载密钥
{
	system("cls");
	printf("\n正在解除与服务器的绑定和删除激活密钥\n");
	Sleep(1000);
	printf("--------");
	Sleep(500);
	printf("--------");
	Sleep(750);
	printf("---------->100% \n");
	kms("-upk");
	printf("已完成\n\n");
}

void qtf2() //检查激活状态
{
	system("cls");
	xpr();
}

void qtm()
{
A:
	int ch;
	printf("其他功能\n");
	printf("\t\t\t\t------------------功能选择---------------\n");
	printf("\t\t\t\t 1.解除与服务器的绑定和删除激活密钥\n");
	printf("\t\t\t\t 2.检查激活状态\n");
	printf("\t\t\t\t-----------------------------------------\n");
	printf("\n\n\n\n");
	printf("输入0以退出\n");
	printf("请选择所需操作的序号：");
	scanf("%d", &ch);
	switch (ch)
	{
	case 0:system("cls"); main();
	case 1:qtf1(); printf("\n按回车以返回\n"); system("pause"); system("cls"); goto A;
	case 2:qtf2(); printf("\n\n按回车以返回\n"); system("pause"); system("cls"); goto A;
	}
}
