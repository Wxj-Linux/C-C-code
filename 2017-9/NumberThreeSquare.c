//NUmberThreeSquare.c -- һ����ƽ��
/*
    ����������һ��������ƽ�����������ĸ���λ�͵���λҲ��������ƽ��
*/
#include <stdio.h>
#include <math.h>

int main()
{
   // int sums;
    for(int i=10; i<32; i++)
        for(int j=10; j<32; j++)
    {
        if((int)sqrt(i*i*1000 + j*j) == sqrt(i*i*1000 + j*j))   //�ⲽ�ǹؼ���
            printf("%d���ĸ���λΪ��%d,����λΪ��%d\n",i*i*1000+j*j,i,j);
    }

return 0;
}
