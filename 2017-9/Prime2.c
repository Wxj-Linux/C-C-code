//素数的求解2
#include <stdio.h>

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

int main()
{
    printf("请输入一个上限：");
    int n;
    scanf("%d",&n);
    for(int i=2; i<n; i++)
    {
        if(Sort(i))
            printf(" %d",i);
    }
}


