//BuyApple.c -- ����ƻ��
#include <stdio.h>

int main()
{
    int sum =1; //ÿ���ƻ��������
    int sums =0; //�����˶���ƻ��
    int days =0; //�ܹ����˼���
    double money; //�ܹ����˶���Ǯ

    while(sum <= 100){
        sum = sum*2;
        sums = sums +sum;
        days++;
    }
    if(sum >100)
        sum = sum/2; //����ˣ����ǵ�ȥ��
    money = sums *0.8;
    printf("����һ������:%d\n",sum);
    printf("�ܹ����ѣ�%f\n",money);
    printf("�ܹ�����%d��\n",days);

}
