#include<stdio.h>
int main();
 void xz()
{
	A:
	printf("�û�ʹ����֪");
	printf("\n\n\n");
	printf("    1.������ΪWindows�����,ͨ��KMS�ķ������������Ĳ���ϵͳ\n");
	printf("    2.���͹���:\n");
	printf("      (1)������0xc004f074�����Ȩ����������ü�����޷������Կ�����������KMS�������á�\n");
	printf("      �������:ʹ��win+r��ݼ������д��ڣ�����services.msc����س� \n");
	printf("      �ڴ򿪵Ĵ����н���Software Protection���������ü���\n");
	printf("    3.�����������kms����dll�޷�ɾ�������˳����򣬲����´򿪣������������ܽ�����ز���\n");
	printf("    4.����kms�����������ɹ�����Ҫ����������������ܳ�������ͽ�������kms����\n");
	printf("\n\n\n\n\n\n");
	printf("����0�Է������˵�:");
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
 