#include <iostream>
#include<Windows.h>

//��������
void zdy();
void ser();
void xpr();
void ipk(const char* cn);
void skms(const char* ln);
int main();


//---------------------------------�û��Զ���---------------------------------------------------//

void zdy1()
{
	char s[29];
	printf("\n�ڶ��׶�\n");
	printf("��Կ��ʽXXXXX-XXXXX-XXXXX-XXXXX-XXXXX\n");
	printf("\t\t   ������KMS������Կ:");
	scanf("%s", s);
	printf("\n�����׶Σ����ڰ�װ������Կ...\n");
	std::string my = s;
	ipk(my.c_str());
	printf("\n���׶�:���ڼ���..\n");
	kms("/ato");
	printf("\n��鼤��״̬\n");
	Sleep(1000);
	xpr();
    F:
	printf("\n����0������һ����");
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

void zdy2()   //�û��Զ���kms��������kms�����뼤��
{
	char a[29];
	printf("\n��һ�׶�\n");
	printf("��д��ʽ ��ַ:�˿�;��û�ж˿�ֱ��д��ַ\n");
	printf("\t\t   ������kms��������ַ");
	scanf("%s", a);
	std::string my = a;
	skms(my.c_str());  //��kms��������ַ
	zdy1();
}

void zdy()
{
	int a;
	printf("�Զ��弤��\n");
	printf("\n\t\t\t\t\t1.�û��Զ���kms�����뼤��\n");
	printf("\n\t\t\t\t\t2.�û��Զ���kms��������kms�����뼤��\n");
	printf("\n\n\n\n\n\n����0�Է���\n");
	printf("��ѡ�������������ţ�");
	scanf("%d", &a);
	switch (a)
	{
	case 1:system("cls"); ser(); zdy1(); break;
	case 2:system("cls"); zdy2(); break;
	case 0:system("cls"); main();
	}


}
