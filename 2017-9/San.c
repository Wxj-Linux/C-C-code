//���������ߣ����ܹ��������Σ��ó���ʲô�����Σ���������
#include <stdio.h>
#include <math.h>

int main()
{
    float wide1,wide2,wide3; //����������
    float area; //���
    printf("�����������ߣ�");
    scanf("%f %f %f",&wide1,&wide2,&wide3);
    //���ж��ǲ���������
    //printf("%f%f%f",wide1,wide2,wide3);
    if(!(wide1 <wide2+wide3 && wide2<wide1+wide3 && wide3<wide1+wide2))
    {
        printf("����������߲��ܹ���һ�������Σ���Ǹ��");

    }else
    {
         //�������ε���״�����ж�
        //1--�ȱ�������
        if(wide1 == wide2 && wide2 == wide3)
            printf("���������ǵȱ�������\n");
        else if(wide1 == wide2 || wide2 == wide3 || wide1 == wide3)
            printf("���������ǵ���������\n");
        else if((wide1*wide1 == wide2*wide2 + wide3*wide3) ||
                (wide2*wide2 == wide1*wide1 + wide3*wide3) ||
                (wide3*wide3 == wide2*wide2 + wide1*wide1) )
            printf("����������ֱ��������\n");
            else
                printf("����ͨ������\n");
        //�����
        float p =  (wide1+wide2+wide3)/2;
        area = (float)sqrt(p *(p-wide1)*(p-wide2)*(p-wide3));
        printf("�������ε����Ϊ��%f",area);
    }

}
