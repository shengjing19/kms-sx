#include <stdio.h>

//函数引用
void kms(const char* zn);
void ser();
void xpr();
void ipk(const char* cn);
int main();

//--------------------------正文（通用激活流程）------------------------------------
void gn()
{
	int B, C;
	char in[256], ni[256];
B:
	
	ser(); //选择服务器函数
	Sleep(1000);
	printf("第二阶段\n");
	printf("\t\t\t\t----选择操作系统！----\n");
	printf("\t\t\t\t 1.Windows 11专业版\n");
	printf("\t\t\t\t 2.Windows 10专业版\n");
	printf("\t\t\t\t 3.Windows 8.1专业版\n");
	printf("\t\t\t\t 4.Windows 8专业版\n");
	printf("\t\t\t\t 5.Windows 7专业版\n");
	printf("\t\t\t\t----------------------\n");
	printf("请输入：");
	scanf_s("%d", &B);
	//setbuf(stdin, NULL);
	switch (B)
	{
	case 1:printf("\n第三阶段：正在安装激活密钥...\n"); ipk("W269N-WFGWX-YVC9B-4J6C9-T83GX");  printf("\n最后阶段:正在激活..\n"); kms("/ato");  goto F; //ipk kms函数
	case 2:printf("\n第三阶段：正在安装激活密钥...\n"); ipk("W269N-WFGWX-YVC9B-4J6C9-T83GX");  printf("\n最后阶段:正在激活..\n"); kms("/ato");  goto F;
	case 3:printf("\n第三阶段：正在安装激活密钥...\n"); ipk("GCRJD-8NW9H-F2CDX-CCM8D-9D6T9");  printf("\n最后阶段:正在激活..\n"); kms("/ato");  goto F;
	case 4:printf("\n第三阶段：正在安装激活密钥...\n"); ipk("NG4HW-VH26C-733KW-K6F98-J8CK4");  printf("\n最后阶段:正在激活..\n"); kms("/ato");  goto F;
	case 5:printf("\n第三阶段：正在安装激活密钥...\n"); ipk("FJ82H-XT6CR-J8D7P-XQJJ2-GPDD4");  printf("\n最后阶段:正在激活..\n"); kms("/ato");  goto F;
	}

F:
	printf("\n结束阶段:检查激活状态\n");
	Sleep(1000);
	xpr(); //xpr函数
	printf("\n按回车以退出\n");
	system("pause");
	exit(0);




	//setbuf(stdin, NULL);
	//system("cls");
	//main(); //激活结束返回主菜单
		
}




