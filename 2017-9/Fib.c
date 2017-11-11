//Fib.c -- 非波拉契数列
#include <stdio.h>

int main()
{
    printf("输入一个上限。");
    int upLimit; //设置一个上限
    scanf("%d",&upLimit);
    int array[upLimit]; //定义存储数据的数组
    array[0] = array[1] = 1;
    int sums=array[0]+array[1];

    for(int i=2; i<upLimit; i++)
    {
        array[i] = array[i-1]+array[i-2];
        sums = sums +array[i];
    }
    for(int j=0; j<upLimit;j++)
        printf(" %d ",array[j]);
   printf("\n前面的所有数值和为：%d \n",sums);

    return 0;
}

/*
为什么这次做怎么这么简单了呢？真是每次都有不一样的感触。
挺好的，就是下次别带手机来了，又玩游戏了。
还不如睡会觉呢！
*/
