#include<stdio.h>
int main();
 void xz()
{
	A:
	printf("用户使用须知");
	printf("\n\n\n");
	printf("    1.本程序为Windows激活工具,通过KMS的方法来激活您的操作系统\n");
	printf("    2.典型故障:\n");
	printf("      (1)“错误：0xc004f074软件授权服务器报告该计算机无法激活。密钥管理服务器（KMS）不可用”\n");
	printf("      解决方案:使用win+r快捷键打开运行窗口，输入services.msc命令并回车 \n");
	printf("      在打开的窗口中将“Software Protection”服务启用即可\n");
	printf("    3.如果遇到离线kms激活dll无法删除，请退出程序，并重新打开，进入其他功能进行相关操作\n");
	printf("    4.离线kms激活清除服务成功后需要重新启动计算机才能彻底清除和进行离线kms激活\n");
	printf("\n\n\n\n\n\n");
	printf("输入0以返回主菜单:");
	int i;
	scanf_s("%d", &i);
	if (i == 0)
	{
		system("cls");
		main();
	}
	else
		goto A;
}
 