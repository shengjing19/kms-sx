#include <stdio.h>
#include <cstdlib>

//��������
void xpr();
void kms(const char* zn);
int main();

//----------------------------------��������---------------------------------------------------------------//
void qtf1() //ж����Կ
{
	system("cls");
	printf("\n���ڽ����������İ󶨺�ɾ��������Կ\n");
	Sleep(1000);
	printf("--------");
	Sleep(500);
	printf("--------");
	Sleep(750);
	printf("---------->100% \n");
	kms("-upk");
	printf("�����\n\n");
}

void qtf2() //��鼤��״̬
{
	system("cls");
	xpr();
}

void qtm()
{
A:
	int ch;
	printf("��������\n");
	printf("\t\t\t\t------------------����ѡ��---------------\n");
	printf("\t\t\t\t 1.�����������İ󶨺�ɾ��������Կ\n");
	printf("\t\t\t\t 2.��鼤��״̬\n");
	printf("\t\t\t\t-----------------------------------------\n");
	printf("\n\n\n\n");
	printf("����0���˳�\n");
	printf("��ѡ�������������ţ�");
	scanf("%d", &ch);
	switch (ch)
	{
	case 0:system("cls"); main();
	case 1:qtf1(); printf("\n���س��Է���\n"); system("pause"); system("cls"); goto A;
	case 2:qtf2(); printf("\n\n���س��Է���\n"); system("pause"); system("cls"); goto A;
	}
}
