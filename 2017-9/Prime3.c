//Prime3.c -- 素数的求解3
/*
    各位数字倒过来仍然是素数
*/
#include <stdio.h>

//求素数
int Sort(int i)
{
    for(int j=2; j<i; j++){
        if(i%j == 0)    //不是素数
            return 0;
        else if(i != j+1)    //没有到最后，重新开始,挺好的一步
            continue;
        else
            return 1;
    }
}

//拆分数字
int Spilt(int sum,int avg)
{
    int result=0;
    int sums=0;     //初始值啊！！！
    while(sum >0){
        result = sum%10;
        sum = (sum-result)/10;
        avg = avg/10;
        sums += result*avg;  //错了
        //printf(" $%d " ,result);
    }
   // printf(" **%d** ",sums);
    return sums/10;   //在之前我们多加了一次，因此此处减去一次
}

int main()
{
    int n,m;
    printf("请输入一个数：\n");
    scanf("%d",&n);
    printf("请输入上限倍率：\n");
    scanf("%d",&m);
    //Spilt(n,m);

    for(int i=2; i<n; i++)
    {
        if(Sort(i) && Sort(Spilt(i,m))){// 素数存在
            printf(" %d ",i);
        }
    }
}

/*
在程序设计中千万的注意初值啊！就像指针一样，你不能什么值都不给人家啊！
*/
