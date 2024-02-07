#include <iostream>
#include<Windows.h>

//函数引用
void zdy();
void ser();
void xpr();
void ipk(const char* cn);
void skms(const char* ln);
int main();


//---------------------------------用户自定义---------------------------------------------------//

void zdy1()
{
	char s[29];
	printf("\n第二阶段\n");
	printf("密钥格式XXXXX-XXXXX-XXXXX-XXXXX-XXXXX\n");
	printf("\t\t   请输入KMS激活密钥:");
	scanf("%s", s);
	printf("\n第三阶段：正在安装激活密钥...\n");
	std::string my = s;
	ipk(my.c_str());
	printf("\n最后阶段:正在激活..\n");
	kms("/ato");
	printf("\n检查激活状态\n");
	Sleep(1000);
	xpr();
    F:
	printf("\n输入0返回上一级：");
	int c;
	scanf("%d", &c);
	if (c == 0)
	{
		system("cls");
		zdy();
	}
	else
	{
		goto F;
	}
}

void zdy2()   //用户自定义kms服务器与kms激活码激活
{
	char a[29];
	printf("\n第一阶段\n");
	printf("填写格式 网址:端口;如没有端口直接写网址\n");
	printf("\t\t   请输入kms服务器地址");
	scanf("%s", a);
	std::string my = a;
	skms(my.c_str());  //绑定kms服务器地址
	zdy1();
}

void zdy()
{
	int a;
	printf("自定义激活\n");
	printf("\n\t\t\t\t\t1.用户自定义kms激活码激活\n");
	printf("\n\t\t\t\t\t2.用户自定义kms服务器与kms激活码激活\n");
	printf("\n\n\n\n\n\n输入0以返回\n");
	printf("请选择所需操作的序号：");
	scanf("%d", &a);
	switch (a)
	{
	case 1:system("cls"); ser(); zdy1(); break;
	case 2:system("cls"); zdy2(); break;
	case 0:system("cls"); main();
	}


}
