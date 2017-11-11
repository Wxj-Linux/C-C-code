//OneMoney.c -- 一元钱能如何兑换

#include <stdio.h>

int main()
{
    for(int i=0; i<=10; i++)
        for(int j=0; j<=5; j++)
            for(int k=0; k<=2; k++)
    {
        if((i+j*2+k*5) == 10)
            printf("一毛：%d个；两毛：%d个； 五毛：%d个\n",i,j,k);
    }

    //打印乘法口诀
    for(int i=1; i<10; i++){
        for(int j=1; j<=i; j++ )
            printf(" %d*%d=%d",j,i,i*j);
        printf("\n");
    }
    printf("\n");

    for(int i=9; i>0; i--){
        for(int j=1; j<=i; j++)
            printf(" %d*%d=%d",j,i,i*j);
        printf("\n");
    }

}
