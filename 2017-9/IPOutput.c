//IPOutput.c -- ��Ӧ�Ķ�����IPת����ʮ���Ƶ�IP��ַ
#include <stdio.h>

int main()
{
    int array[4]; //���ڴ��ip��ַ
    int flag=0; //��ʱ��array������д��ip
    int result = 0;
    long sums; //�û�����Ķ�����ip
    int ip=0;
    printf("�������������ip��ַ��\n");
    scanf("%d",&sums);
    printf("%d\n",sums);
    for(int i=0; i<24; i++)
    {
        if(flag >7){
            flag =0;
            array[i/8] = ip;
            ip =0;
            printf("%d",array[i/8]);
        }
        result =(int) sums%10;
        ip += result;
        sums = (sums-result)/10;
        flag++;
        printf("%d",flag);
    }
    //for(int j=4; j>0; j--)
    //    printf("%d.",array[j]);
}
