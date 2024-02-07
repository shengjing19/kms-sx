#include <cstdio>
#include <cstdlib>
#include<Windows.h>


//函数引用
void gn();  //function.h
void zdy();
void qtm();
void xz();
int main();

//--------------------------正文------------------------------------
void menu()
{
	int g;
	printf("\n\t\t\t\t\t\t Kms 激活工具 v1.0.7");
	printf("\n\t\t\t\t\t======================================");
	printf("\n\t\t\t\t\t1.通用Kms激活\n");
	printf("\n\t\t\t\t\t2.自定义激活\n");
	printf("\n\t\t\t\t\t3.其他功能\n");
	printf("\n\t\t\t\t\t4.使用须知\n");
	printf("\n\n\n\n");
	printf("输入0以退出程序\n");
	printf("请选择所需操作的序号：");
	scanf("%d", &g);
	//setbuf(stdin, NULL);
	switch (g)
	{
	case 0: exit(0);
	case 1: system("cls"); gn();
	case 2:system("cls"); zdy(); system("cls"); main();
	case 3: system("cls"); qtm(); system("cls"); main();
	case 4: system("cls"); xz();
	}
	
}

void hcq() //内存缓存区问题 ！存在问题！
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

