//���������2
#include <stdio.h>

int Sort(int i)
{
    for(int j=2; j<i; j++){
        if(i%j == 0)    //��������
            return 0;
        else if(i != j+1)    //û�е�������¿�ʼ,ͦ�õ�һ��
            continue;
        else
            return 1;
    }
}

int main()
{
    printf("������һ�����ޣ�");
    int n;
    scanf("%d",&n);
    for(int i=2; i<n; i++)
    {
        if(Sort(i))
            printf(" %d",i);
    }
}


