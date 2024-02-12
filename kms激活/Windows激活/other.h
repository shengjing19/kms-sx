#include <stdio.h>
#include <cstdlib>

//函数引用
void xpr();
void kms(const char* zn);
void dlv();
void deletedll();
void deleteRegistryKey();
void remove_kms_server();
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
	printf("\t\t\t\t 3.显示激活详细信息\n");
	printf("\t\t\t\t 4.移除离线kms激活的dll\n");
	printf("\t\t\t\t 5.移除离线kms激活的注册表信息\n");
	printf("\t\t\t\t 6.移除离线kms激活的服务信息\n");
	printf("\t\t\t\t-----------------------------------------\n");
	printf("\n\n\n\n");
	printf("输入0以返回\n");
	printf("请选择所需操作的序号：");
	scanf("%d", &ch);
	switch (ch)
	{
	case 0:system("cls"); main();
	case 1:qtf1(); printf("\n按回车以返回\n"); system("pause"); system("cls"); goto A;
	case 2:qtf2(); printf("\n\n按回车以返回\n"); system("pause"); system("cls"); goto A;
	case 3:system("cls"); dlv(); printf("\n\n按回车以返回\n"); system("pause"); system("cls"); goto A;
	case 4:system("cls"); deletedll(); printf("\n\n按回车以返回\n"); system("pause"); system("cls"); goto A;
	case 5:system("cls"); deleteRegistryKey(); printf("\n\n按回车以返回\n"); system("pause"); system("cls"); goto A;
	case 6:system("cls"); remove_kms_server(); printf("\n\n按回车以返回\n"); system("pause"); system("cls"); goto A;
	}
}
