#include<stdio.h>

int main()
{
	int C = 0,F;				//C�����¶�,F�����¶�
	printf("�����¶�\t�����¶�\n");
	while(C <= 100)
	{
		F = 9*C/5+32;
		printf("%d\t\t%d\n",C,F);
		C = C+5;	
	}
} 
