//IntimateNumber.c -- 亲密数
/*
BRIEF INTRODUCTION:
    A的所有因子之和为B；
    B的所有因子之和为A;
    【当然不能加上自己】
THINKING:
    1、创建一个求因子的函数
TIME:
    2017-09-19 23:20 WXJ
*/

#include <stdio.h>

//Divisor
//求解因子之和
int Divisor(int n)
{
    int sums =0;
    for(int i=0; i<n; i++)
        {
            if(n%i == 0){//是因子,可以整除

                sums += i;
                printf("%d",sums);}
        }

return sums;    //返回因子和
}

int main()
{
for(int i=0; i<1000; i++)
        for(int j=0; j<i; j++)
    {
        if(Divisor(i)==j && Divisor(j)==i && j!=i)  //IntimateNumber
            printf("亲密数有：%d %d",i,j);
    }

   // printf("%d",Divisor(100));
return 0;
}
/*
for(int i=0; i<1000; i++)
        for(int j=0; j<1000; j++)
    {
        if(Divisor(i)==j && Divisor(j)==i && j!=i)  //IntimateNumber
            printf("亲密数有：%d %d",i,j);
    }
*/
