//SpecialSquireNumber.c  --特殊的完全平方数
#include <stdio.h>

int array[3]={0};
//先构造一个拆分数字的函数，我们还得用到这个数字，先使用以前的想法实现一遍
int Spilt(int n)
{
    for(int i=0;; i++){
        if(n<0)
            break;
        array[i] = n%10;
        n = (n-array[i])/10;
    }
}

int main()
{
    int sums;
    //10～32之间就好了
    for(int i= 10; i<32; i++)
    {
        sums = i*i;
        Spilt(sums);
        if(array[0] == array[1] || array[0] == array[2] || array[1] == array[2])
            printf("%d 的完全平方数为：%d",i,sums);
    }
}
