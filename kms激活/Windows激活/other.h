#include <stdio.h>
#include <cstdlib>

//��������
void xpr();
void kms(const char* zn);
void dlv();
void deletedll();
void deleteRegistryKey();
void remove_kms_server();
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
	printf("\t\t\t\t 3.��ʾ������ϸ��Ϣ\n");
	printf("\t\t\t\t 4.�Ƴ�����kms�����dll\n");
	printf("\t\t\t\t 5.�Ƴ�����kms�����ע�����Ϣ\n");
	printf("\t\t\t\t 6.�Ƴ�����kms����ķ�����Ϣ\n");
	printf("\t\t\t\t-----------------------------------------\n");
	printf("\n\n\n\n");
	printf("����0�Է���\n");
	printf("��ѡ�������������ţ�");
	scanf("%d", &ch);
	switch (ch)
	{
	case 0:system("cls"); main();
	case 1:qtf1(); printf("\n���س��Է���\n"); system("pause"); system("cls"); goto A;
	case 2:qtf2(); printf("\n\n���س��Է���\n"); system("pause"); system("cls"); goto A;
	case 3:system("cls"); dlv(); printf("\n\n���س��Է���\n"); system("pause"); system("cls"); goto A;
	case 4:system("cls"); deletedll(); printf("\n\n���س��Է���\n"); system("pause"); system("cls"); goto A;
	case 5:system("cls"); deleteRegistryKey(); printf("\n\n���س��Է���\n"); system("pause"); system("cls"); goto A;
	case 6:system("cls"); remove_kms_server(); printf("\n\n���س��Է���\n"); system("pause"); system("cls"); goto A;
	}
}
