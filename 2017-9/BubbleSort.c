//BubbleSort.c --����ð������
#include <stdio.h>

int main()
{
    int array[10] = {12,23,2,4,56,43,1,10,22,11};
    for(int i=1; i<10; i++)
        for(int j=1; j<11-i; j++)       //��������������ð���ˣ������װ�����ô��ǰû���뵽�أ�
            //���Ǳ����������Լ�������
            //�ද�ʻ����ͺ��ˣ�һ���Ӿ�����ʲô�ˡ�֪����
    {
        if(array[j] >array[j-1])
        {
            int swap = array[j];
            array[j] = array[j-1];
            array[j-1] = swap;
        }
    }
    for(int i=0; i<10; i++)
        printf(" %d ",array[i]);
}
