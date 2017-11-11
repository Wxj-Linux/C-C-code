//OutStc.c --输出一个三角形
#include <stdio.h>

int main()
{
    int n;
    printf("请输入层数：");
    scanf("%d",&n);
   for(int i=1; i<n; i++)
   {
       //记住关注的焦点
       for(int j=n-i; j>0; j--)
            printf(" ");
        for(int k=2*i-1; k>0; k--)
            printf("*");
        printf("\n");
   }
   return 0;
}
