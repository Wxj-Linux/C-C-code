//OutputTriangle.c --���һ��������ͼ��
#include <stdio.h>

int main()
{
    printf("������������\n");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=0;j<n-i; j++) //����հ�
            printf(" ");
        for(int k=n-i; k<(n-i)+(2*i-1); k++)        //�������һ��
            printf("*");    //���*��
        printf("\n");
    }

}
