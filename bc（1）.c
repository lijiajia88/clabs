#include<stdio.h>

int main()
{
	int i = 0,Input,Count = 0;
	int bin[20];
	
	scanf("%d",&Input);
	
	for(i = 0;Input > 0;i++)										
	{
		bin[i] = ((Input & 1) == 0 ? 0 : 1);					
		Input >>= 1;											
	}
	i--;
	for(;i >= 0;i--)
	{
		printf("%d",bin[i]);
		if(bin[i] == 1)											
			Count++;									
	}
	printf("\n1 的个数为%d",Count);								
	
}
