//IntimateNumber.c -- ������
/*
BRIEF INTRODUCTION:
    A����������֮��ΪB��
    B����������֮��ΪA;
    ����Ȼ���ܼ����Լ���
THINKING:
    1������һ�������ӵĺ���
TIME:
    2017-09-19 23:20 WXJ
*/

#include <stdio.h>

//Divisor
//�������֮��
int Divisor(int n)
{
    int sums =0;
    for(int i=0; i<n; i++)
        {
            if(n%i == 0){//������,��������

                sums += i;
                printf("%d",sums);}
        }

return sums;    //�������Ӻ�
}

int main()
{
for(int i=0; i<1000; i++)
        for(int j=0; j<i; j++)
    {
        if(Divisor(i)==j && Divisor(j)==i && j!=i)  //IntimateNumber
            printf("�������У�%d %d",i,j);
    }

   // printf("%d",Divisor(100));
return 0;
}
/*
for(int i=0; i<1000; i++)
        for(int j=0; j<1000; j++)
    {
        if(Divisor(i)==j && Divisor(j)==i && j!=i)  //IntimateNumber
            printf("�������У�%d %d",i,j);
    }
*/
