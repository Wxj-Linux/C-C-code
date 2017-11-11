//IPOutput2.c -- 二进制ip地址转换成十进制ip地址
/*
    利用数组的关系进行求解，
    如果按照以往自己的想法进行求解也不是不可以哦。就是感觉没有这种方便
    但是在codeblocks中好几个函数好像用不了，真是无趣

*/
#include <stdio.h>

//求x^n，唉，这个问题还想了那么久，真是浪费时间啊！
int bin_dec(int x, int n)
{
    if(n==0)
        return 1;
    return x*bin_dec(x,n-1);
}

int main()
{
    int ip[4] ={0};
    char a[33];     //为什么是33个空间呢？因为还要加个\0有时候真是
    printf("请输入一个ip：\n");
    scanf("%s",a);  //二进制数以字符形式读入   唉，真是服了c语言来，真是对程序员没有什么限制啊！只要你胆子大
    //写成了：scanf("%c",a);

    for(int i=0; i<8; i++)  //计算0～7位的转化结果
    {
        if(a[i] == '1')
            ip[0] += bin_dec(2,7-i);
    }
    printf("%d\n",ip[0]);
    for(int i=8; i<16; i++)  //计算0～7位的转化结果
    {
        if(a[i] == '1')
            ip[1] += bin_dec(2,15-i);
    }
    printf("%d\n",ip[1]);
    for(int i=16; i<24; i++)  //计算0～7位的转化结果
    {
        if(a[i] == '1')
            ip[2] += bin_dec(2,23-i);
    }
    printf("%d\n",ip[2]);
    for(int i=24; i<32; i++)  //计算0～7位的转化结果
    {
        if(a[i] == '1')
            ip[3] += bin_dec(2,31-i);
        if(a[i] == '\0');
            break;
    }
    printf("%d\n",ip[3]);
    printf("IP:\n%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);

}
