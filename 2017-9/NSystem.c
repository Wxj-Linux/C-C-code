//NSystem.c -- �������ת����ʮ����

/*
    ˼·������123456  Ϊ����������
            ��6*6^0 + 5*6^1����
            ���ԣ����ȶ�һ���������в��
*/
#include <stdio.h>

int main()
{
    int sum; //���ڼ�¼�û��������ֵ
    int system; //���ڼ�¼�û�����Ľ���
    int result; //���ڶ����ֵ�����
    int tenSystem=0; //ת����ʮ���ƺ������
    int systems=1;
    printf("������sumֵ��");
    scanf("%d",&sum);   //�������ˣ���Ȼ����Ϊһ��&���ţ�����
    printf("��������ƣ�");
    scanf("%d",&system);

    while(sum >9){
    //printf("%d",sum);
        result = sum%10;
        //printf(" %d ",result);
        sum = (sum-result)/10;
        systems = systems*system;   //���Խ���

        tenSystem += result*systems/system; //�������λ
        //printf("���ջ���ʮ����Ϊ��%d",tenSystem);
    }
    tenSystem += sum*systems;   //�úõķ���һ�£����ﲻ���ٳ��Զ�˵ı�����
    printf("���ջ���ʮ����Ϊ��%d",tenSystem);

    return 0;
}
