//��ĳ��������η���������λ
/*
*   ˼·����Ϊ�ڳ����в���ֱ�� a^b ������ʾ������ֻ�ܽ�����ѭ��������ʵ��
*
*/
#include <stdio.h>

int main()
{
    first();
    two();
    finally();

}

void first()
{
    int a, b; //�ֱ�Ϊ��������
    int sum = a; //���η���õ�������
    printf("������һ�����͸����Ĵη���");
    scanf("%d %d",&a, &b);
    for(int i=0; i<b; i++)
        sum = sum *a;   //���ϵĽ��з�
    //��ȡ������λ
    int c;
    for(int i=0; i<3; i++)
    {

        c = sum %10;
        sum = (sum -c)/10;
        printf("%d",c);
    }
}

void two()
{
    int x,y,z=1;
    printf("\n������x��y��x^y)\n");
    scanf("%d %d",&x, &y);
    for(int i=1; i<= y; i++)
        z = z*x %1000;  //�ǳ������һ����������������λ�Ĳ�����
    if(z >= 100)
        printf("����λ�ǣ�%d",z);
    else
        printf("����λ�ǣ�0%d",z);
}

/*
* ����������������ֽ��в��
*
*/
int finally()
{
    printf("������һ�����ֽ��в�֣�");
    int sum;
    scanf("%d",&sum);
    int sums = sum;
    while(sums > 9){
            int n = 1;
        while(sum >9){
            sum = sum /10;
            n = n*10;
        }
        printf("%d",sum);
        sum = sums - sum *n;
    }
}
