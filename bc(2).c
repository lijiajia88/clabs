#include<stdio.h>

int main()
{
	char Input_char;
	int dec[7];
	int i = 0,j = 0,k,Input = 0,Count = 0;
	int bin[20];
	
	while((Input_char = getchar()) != '\n')						
	{
		dec[i] = (int)(Input_char-'0');							
		i++;
	}
	i--;														
	for(;i >= 0;i--)											
	{
		for(k = 0;k < j;k++)
		{
			dec[i] = dec[i]*10;
		}
		Input = Input+dec[i];
		j++;
	}
	
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
