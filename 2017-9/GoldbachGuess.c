//GoldbachGuess.c --��°ͺղ���
/*
100���ڵ���ż�����ֽܷ����������֮��
*/
#include <stdio.h>

int main()
{
    int measure; //��������
    int array[100]; //���ڴ��100���ڵ�����
    //int sums=0; //�����ж��Ƿ�������>2
    int k=1;    //���ڴ�������������е�λ��
    printf("������һ��100���ڵ���ż����");
    scanf("%d",&measure);
    array[0] = 1;

    //�ҳ�100���ڵ���������
    for(int i=2; i<100;i++)
        for(int j=2; j<i; j++)
    {
        //if(i/j == 0) sums++;    //�Լ�������1�����������ˣ�����Ӧ�ü�һ��sums�������ж���ֻ������
                                //����ɵ���𣿿��Կ���1���Լ�������
        //if(sums == 2) //������
        if(i%j == 0)
           break; //��������ֵ���赽����array��

        array[k++] = i;
        }


    for(int i=0; i<=k; i++){
        printf(" %d ",array[i]);
    }

/*
    //��֤����
    for(int i=0; i<=k; i++)
        for(int j=0; j<=k; j++)
            if(array[i] +array[j] == measure)
               // printf("%d�����ã�%d��%d��ʾ��",measure,&array[i],&array[j]);
*/
    return 0;
}
