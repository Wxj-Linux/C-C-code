//IPOutput.c -- 相应的二进制IP转化成十进制的IP地址
#include <stdio.h>

int main()
{
    int array[4]; //用于存放ip地址
    int flag=0; //何时往array数组中写入ip
    int result = 0;
    long sums; //用户输入的二进制ip
    int ip=0;
    printf("请你输入二进制ip地址：\n");
    scanf("%d",&sums);
    printf("%d\n",sums);
    for(int i=0; i<24; i++)
    {
        if(flag >7){
            flag =0;
            array[i/8] = ip;
            ip =0;
            printf("%d",array[i/8]);
        }
        result =(int) sums%10;
        ip += result;
        sums = (sums-result)/10;
        flag++;
        printf("%d",flag);
    }
    //for(int j=4; j>0; j--)
    //    printf("%d.",array[j]);
}
