//PrimeNumber.c -- ���100-200 ֮�������
#include <stdio.h>
#include <stdbool.h>

bool Prime(int i,int n);

int main()
{
    int floor, up;
    printf("��������������floor,up\n");
    scanf("%d%d",&floor,&up);

    for(int i=floor; i<=up; i++)
    {
         if(Prime(i,up))     //���������������Ӧ����
            printf("%d",i);
    }

}




//�ֲ�����У�
bool Prime(int i,int n) //�������Ը��õ�
{
    for(int i; i<=n; i++)
    {
        if(n%i == 0)    //�����������ľ��˳�
            return false;
    }
    return true;
}
