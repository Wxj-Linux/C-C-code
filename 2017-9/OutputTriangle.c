//OutputTriangle.c --输出一个三角形图案
#include <stdio.h>

int main()
{
    printf("请输入行数：\n");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=0;j<n-i; j++) //输出空白
            printf(" ");
        for(int k=n-i; k<(n-i)+(2*i-1); k++)        //慢点分析一下
            printf("*");    //输出*号
        printf("\n");
    }

}
