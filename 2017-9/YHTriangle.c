//YHTriangle.c -- ������ǵļ��㷽��

#include <stdio.h>

int main()
{
    int sums;
    for(int sums = 303;; sums++){
        if((sums*2%10 == 0) &&
           ((sums - sums*2/10 - 303)/7*10 == sums))
            printf("%d ",sums);
    }
}
