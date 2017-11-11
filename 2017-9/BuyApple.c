//BuyApple.c -- 购买苹果
#include <stdio.h>

int main()
{
    int sum =1; //每天的苹果购买量
    int sums =0; //购买了多少苹果
    int days =0; //总共买了几天
    double money; //总共花了多少钱

    while(sum <= 100){
        sum = sum*2;
        sums = sums +sum;
        days++;
    }
    if(sum >100)
        sum = sum/2; //多加了，我们的去除
    money = sums *0.8;
    printf("最多的一天买了:%d\n",sum);
    printf("总共花费：%f\n",money);
    printf("总共买了%d天\n",days);

}
