#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    int i=0;
    for(i=0;i<7;++i);
    int a[100];
    int count=0;
    printf("请输入一个十进制正整数：\n");
    scanf("%d",&n);
    printf("对应的二进制整数是：")；
    while (n){
        a[i]=n%2;
        i++;
        n/=2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
        if(a[j]==1){
            count++;
        }
    }
    printf("\n\"1\"出现的次数是%d\n",count);
    system("pause");
    return 0;
}