//GoldbachGuess2.c -- ��°ͺղ�����α��
#include <stdio.h>
#include <stdbool.h>

//�úõ�����,��ôһ���򵥵ĳ���Ū����ô��
int main()
{
    int array[100];
    int upLimint=100;   //����
    int k=0;
    int sum=0;
    for(int i=1; i<upLimint; i++)
        if(numberIsPrime(i)){
            array[k++] = i;
            printf(" %d ",array[k-1]);
            sum++;
        }

    //100��ż������������֮��
    int measure;
    printf("\n������һ�����Ե�����");
    scanf("%d",&measure);
    for(int i=0; i<sum; i++)
        for(int j=0; j<sum; j++)
            if(array[i] +array[j] == measure){
                printf("\n%d�����ã�%d��%d��ʾ��",measure,array[i],array[j]);
                return;
            }

    printf("\n��Ǹ");
}



/**
     * �ж�һ�����ǲ���������ֻ�ܱ�1�ͱ�������
     * <p>
     * ˵������2��ʼ��������Ҫ��n��Ҳ����ѭ�������� < n �Ϳ��ԣ���֮��ֻҪ�������ˣ���ô���Ͳ���������
     */
int numberIsPrime(int n) //nΪ�Ƿ�������
{
    for(int j=2; j<n; j++)
        if(n%j == 0) //����������
            return false;   //ֻҪ�����������Ϳɴ˳�����
        //return i; //����������ֵ
    return true;    //�����ķ�������
} //�ó�����
