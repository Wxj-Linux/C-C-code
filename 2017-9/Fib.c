//Fib.c -- �ǲ���������
#include <stdio.h>

int main()
{
    printf("����һ�����ޡ�");
    int upLimit; //����һ������
    scanf("%d",&upLimit);
    int array[upLimit]; //����洢���ݵ�����
    array[0] = array[1] = 1;
    int sums=array[0]+array[1];

    for(int i=2; i<upLimit; i++)
    {
        array[i] = array[i-1]+array[i-2];
        sums = sums +array[i];
    }
    for(int j=0; j<upLimit;j++)
        printf(" %d ",array[j]);
   printf("\nǰ���������ֵ��Ϊ��%d \n",sums);

    return 0;
}

/*
Ϊʲô�������ô��ô�����أ�����ÿ�ζ��в�һ���ĸд���
ͦ�õģ������´α���ֻ����ˣ�������Ϸ�ˡ�
������˯����أ�
*/
