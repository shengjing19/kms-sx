#include <stdio.h>

//��������
void ms(const char* str);
void skms(const char* ln);

//--------------------------����------------------------------------
void ser() 
{
	int A;
	system("cls");
	printf("\n");
	printf("��һ�׶�\n");
	printf("\t\t\t---------------��ѡ�񼤻������-------------------\n");
	printf("\t\t      ������\t\t  ����״̬      ��ʱ       �ź�����\n");
	printf("\t\t    1:kms.shuax.com  \t");  printf(" ");	ms("kms.shuax.com ");   //ms����
	printf("\n\t\t    2:kms.dwhd.org  \t");  printf(" "); ms("kms.dwhd.org ");
	printf("\n\t\t    3:kms.luody.info  \t");  printf(" ");	ms("kms.luody.info ");
	printf("\n\t\t    4:kms.digiboy.ir  \t");  printf(" ");	ms("kms.digiboy.ir ");
	printf("\n\t\t    5:www.zgbs.cc  \t"); 	printf(" "); ms("www.zgbs.cc ");
	printf("\n\t\t    6:cy2617.jios.org   ");  printf(" ");	ms("cy2617.jios.org ");
	printf("\n\t\t\t--------------------------------------------------\n");
	printf("�����룺");
	scanf_s("%d", &A);
	//setbuf(stdin, NULL); //���������
	switch (A)
	{
	case 1: system("cls"); printf("---���ڰ󶨼��������...---\n"); Sleep(1000); skms("kms.shuax.com");  break;  //skms����
	case 2: system("cls"); printf("---���ڰ󶨼��������...---\n"); Sleep(1000); skms("kms.dwhd.org");  break;
	case 3: system("cls"); printf("---���ڰ󶨼��������...---\n"); Sleep(1000); skms("kms.luody.info");  break;
	case 4: system("cls"); printf("---���ڰ󶨼��������...---\n"); Sleep(1000); skms("kms.digiboy.ir");  break;
	case 5: system("cls"); printf("---���ڰ󶨼��������...---\n"); Sleep(1000); skms("www.zgbs.cc");  break;
	case 6: system("cls"); printf("---���ڰ󶨼��������...---\n"); Sleep(1000); skms("cy2617.jios.org");  break;
	}
}

