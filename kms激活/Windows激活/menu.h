#include <cstdio>
#include <cstdlib>
#include<Windows.h>


//��������
void gn();  //function.h
void zdy();
void qtm();
void xz();
int main();

//--------------------------����------------------------------------
void menu()
{
	int g;
	printf("\n\t\t\t\t\t\t Kms ����� v1.0.7");
	printf("\n\t\t\t\t\t======================================");
	printf("\n\t\t\t\t\t1.ͨ��Kms����\n");
	printf("\n\t\t\t\t\t2.�Զ��弤��\n");
	printf("\n\t\t\t\t\t3.��������\n");
	printf("\n\t\t\t\t\t4.ʹ����֪\n");
	printf("\n\n\n\n");
	printf("����0���˳�����\n");
	printf("��ѡ�������������ţ�");
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

void hcq() //�ڴ滺�������� ���������⣡
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

