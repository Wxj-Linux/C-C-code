//SpecialSquireNumber.c  --�������ȫƽ����
#include <stdio.h>

int array[3]={0};
//�ȹ���һ��������ֵĺ��������ǻ����õ�������֣���ʹ����ǰ���뷨ʵ��һ��
int Spilt(int n)
{
    for(int i=0;; i++){
        if(n<0)
            break;
        array[i] = n%10;
        n = (n-array[i])/10;
    }
}

int main()
{
    int sums;
    //10��32֮��ͺ���
    for(int i= 10; i<32; i++)
    {
        sums = i*i;
        Spilt(sums);
        if(array[0] == array[1] || array[0] == array[2] || array[1] == array[2])
            printf("%d ����ȫƽ����Ϊ��%d",i,sums);
    }
}
