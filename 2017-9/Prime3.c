//Prime3.c -- ���������3
/*
    ��λ���ֵ�������Ȼ������
*/
#include <stdio.h>

//������
int Sort(int i)
{
    for(int j=2; j<i; j++){
        if(i%j == 0)    //��������
            return 0;
        else if(i != j+1)    //û�е�������¿�ʼ,ͦ�õ�һ��
            continue;
        else
            return 1;
    }
}

//�������
int Spilt(int sum,int avg)
{
    int result=0;
    int sums=0;     //��ʼֵ��������
    while(sum >0){
        result = sum%10;
        sum = (sum-result)/10;
        avg = avg/10;
        sums += result*avg;  //����
        //printf(" $%d " ,result);
    }
   // printf(" **%d** ",sums);
    return sums/10;   //��֮ǰ���Ƕ����һ�Σ���˴˴���ȥһ��
}

int main()
{
    int n,m;
    printf("������һ������\n");
    scanf("%d",&n);
    printf("���������ޱ��ʣ�\n");
    scanf("%d",&m);
    //Spilt(n,m);

    for(int i=2; i<n; i++)
    {
        if(Sort(i) && Sort(Spilt(i,m))){// ��������
            printf(" %d ",i);
        }
    }
}

/*
�ڳ��������ǧ���ע���ֵ��������ָ��һ�����㲻��ʲôֵ�������˼Ұ���
*/
