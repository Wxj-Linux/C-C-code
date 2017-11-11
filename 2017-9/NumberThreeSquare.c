//NUmberThreeSquare.c -- 一数三平方
/*
    该数本身是一个整数的平方，而且它的高三位和第三位也是整数的平方
*/
#include <stdio.h>
#include <math.h>

int main()
{
   // int sums;
    for(int i=10; i<32; i++)
        for(int j=10; j<32; j++)
    {
        if((int)sqrt(i*i*1000 + j*j) == sqrt(i*i*1000 + j*j))   //这步是关键的
            printf("%d数的高三位为：%d,低三位为：%d\n",i*i*1000+j*j,i,j);
    }

return 0;
}
