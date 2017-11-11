//GoldbachGuess2.c -- 歌德巴赫猜想二次编程
#include <stdio.h>
#include <stdbool.h>

//好好的想想,这么一个简单的程序弄了那么久
int main()
{
    int array[100];
    int upLimint=100;   //上限
    int k=0;
    int sum=0;
    for(int i=1; i<upLimint; i++)
        if(numberIsPrime(i)){
            array[k++] = i;
            printf(" %d ",array[k-1]);
            sum++;
        }

    //100内偶数是两个素数之和
    int measure;
    printf("\n请输入一个测试的数：");
    scanf("%d",&measure);
    for(int i=0; i<sum; i++)
        for(int j=0; j<sum; j++)
            if(array[i] +array[j] == measure){
                printf("\n%d可以用：%d和%d表示。",measure,array[i],array[j]);
                return;
            }

    printf("\n抱歉");
}



/**
     * 判断一个数是不是素数：只能被1和本身整除
     * <p>
     * 说明：从2开始除，不需要到n，也就是循环条件是 < n 就可以，这之间只要被整除了，那么他就不是素数了
     */
int numberIsPrime(int n) //n为是否是质数
{
    for(int j=2; j<n; j++)
        if(n%j == 0) //不是素数了
            return false;   //只要不满足条件就可此撤回了
        //return i; //返回素数的值
    return true;    //真正的返回素数
} //得出素数
