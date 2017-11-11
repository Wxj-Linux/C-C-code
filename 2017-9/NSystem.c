//NSystem.c -- 任意进制转化成十进制

/*
    思路：例：123456  为六进制数，
            则：6*6^0 + 5*6^1……
            所以，首先对一个整数进行拆分
*/
#include <stdio.h>

int main()
{
    int sum; //用于记录用户输入的数值
    int system; //用于记录用户输入的进制
    int result; //用于定义拆分的数字
    int tenSystem=0; //转换成十进制后的数字
    int systems=1;
    printf("请输入sum值：");
    scanf("%d",&sum);   //气死我了，竟然是因为一个&符号！！！
    printf("请输入进制：");
    scanf("%d",&system);

    while(sum >9){
    //printf("%d",sum);
        result = sum%10;
        //printf(" %d ",result);
        sum = (sum-result)/10;
        systems = systems*system;   //乘以进制

        tenSystem += result*systems/system; //还差最高位
        //printf("最终化成十进制为：%d",tenSystem);
    }
    tenSystem += sum*systems;   //好好的分析一下，这里不用再除以多乘的倍数了
    printf("最终化成十进制为：%d",tenSystem);

    return 0;
}
