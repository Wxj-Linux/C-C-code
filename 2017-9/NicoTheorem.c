//NicoTheorem.c -- ��Ƴ�˹����
/*
�κ�һ������������������д��һ�����������ĺ�
*/

#include <stdio.h>

int main()
{
    int measured ;   //�����Ե�����
    int sum=0; //�����ۼӵ�����
    int i=1;
    printf("������һ������");
    scanf("%d", &measured);

    while(measured != sum && i <10){
        sum = sum +i;
        printf("+ %d",i);
        i= i+2;
    }
//return 0;
}
