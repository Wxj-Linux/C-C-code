//PutRec.c -- 输出一个矩形图案
#include <stdio.h>

int main()
{
    int n;
    printf("请输入大小:");
    scanf("%d",&n);
    for(int i= 0; i<n; i++)
    {

        for(int j=0; j<n; j++)
    {
        if(i==0 || i == n-1)
            printf("*");
        else if(j == 0 || j == n-1)
            printf("*");
        else
            printf(" ");

    }
    printf("\n");
    }
    return 0;
}

