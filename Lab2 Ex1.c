#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int num = 1;
    int bit = 0; 
    printf("请等待一会儿.."); 
    while (num)
    {
        num++;						//循环+1直到整个无符号整型又转为1 
    }
    num--;									//此时a值为0，回退一次，得到最大最大整数（其实如果了解无符号整型如何存放的，直接0—1即可得，不过这里体现一下找的过程）
    printf("\nunsigned int数据类型最大整数是：%u\n",num);
    
    
    while(1)							
	{
		if((num & 1) == 0 ? 0 : 1)					//按位and运算得到最后一个
			bit++;
		else
			break;
		num >>= 1;											//二进制右移一位
	}
    printf("unsigned int数据类型最大位数是：%d\n",bit);
	return 0;
}
