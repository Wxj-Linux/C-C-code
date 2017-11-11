//SelfTOSelf.c --自己的平方的尾数还是自己
/*
    例如：25^2 = 625
*/
#include <stdio.h>

int main()
{
    for(long i=0; i<10000; i++)
    {
        if((i*i)%10 == i || (i*i)%100 == i || (i*i)%1000 == i || (i*i)%10000 == i)  //想复杂了哈，一部就到位了啊！
            printf("%ld\n",i);
    }

}

