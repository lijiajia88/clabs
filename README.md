#include<stdio.h>

int main()
{
    int C = 0,F;
    printf("摄氏温度\t华氏温度\n");
    while(C <= 100)
    {
        F = 9*C/5+32;
        printf("%d\t\t%d\n",C,F);
        C = C+5;
    }
}
