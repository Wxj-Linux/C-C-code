//OneMoney.c -- һԪǮ����ζһ�

#include <stdio.h>

int main()
{
    for(int i=0; i<=10; i++)
        for(int j=0; j<=5; j++)
            for(int k=0; k<=2; k++)
    {
        if((i+j*2+k*5) == 10)
            printf("һë��%d������ë��%d���� ��ë��%d��\n",i,j,k);
    }

    //��ӡ�˷��ھ�
    for(int i=1; i<10; i++){
        for(int j=1; j<=i; j++ )
            printf(" %d*%d=%d",j,i,i*j);
        printf("\n");
    }
    printf("\n");

    for(int i=9; i>0; i--){
        for(int j=1; j<=i; j++)
            printf(" %d*%d=%d",j,i,i*j);
        printf("\n");
    }

}
