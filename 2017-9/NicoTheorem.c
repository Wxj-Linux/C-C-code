//NicoTheorem.c -- 尼科彻斯定理。
/*
任何一个整数的立方都可以写成一串连续奇数的和
*/

#include <stdio.h>

int main()
{
    int measured ;   //待测试的数字
    int sum=0; //不断累加的数字
    int i=1;
    printf("请输入一个数：");
    scanf("%d", &measured);

    while(measured != sum && i <10){
        sum = sum +i;
        printf("+ %d",i);
        i= i+2;
    }
//return 0;
}
