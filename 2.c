#include <stdio.h>
int main()    //����ʱ���������������
{
	int hour1=0 , minute=0;
	int hour2=0, minute2=0;

	printf("���뱻����\n");

	scanf_s("%d %d", &hour1, &minute);

	printf("�������\n");

	scanf_s("%d %d",&hour2,&minute2);

	int amount1 = hour1 - hour2;
	int amount2 = minute - minute2;
	int amount3 = amount1*60 ;
	int q = amount3 + amount2 ;

	printf("ʱ��������%d", q);

	return 0;
}