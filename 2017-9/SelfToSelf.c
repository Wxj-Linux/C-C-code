//SelfTOSelf.c --�Լ���ƽ����β�������Լ�
/*
    ���磺25^2 = 625
*/
#include <stdio.h>

int main()
{
    for(long i=0; i<10000; i++)
    {
        if((i*i)%10 == i || (i*i)%100 == i || (i*i)%1000 == i || (i*i)%10000 == i)  //�븴���˹���һ���͵�λ�˰���
            printf("%ld\n",i);
    }

}

