//Bissextile.c -- �ж��Ƿ������꣬�ҽ�����һ���еĵڼ��죬
//                  --������ܵĻ�ת����ũ��,������ţ���á���

#include <stdio.h>
#include <stdbool.h>

bool IsBissextile(int year);
int YearDay(int,int,int);

int main()
{
    int year,month,day,rankDay;
    printf("��������ݡ��·ݡ��죺\n");
    scanf("%d%d%d",&year,&month,&day);
    rankDay = YearDay(year,month,day);
    if(IsBissextile(year))
        printf("���������꣬������һ���еĵ�%d��.",rankDay);
    else
        printf("������ƽ�꣬������һ���еĵ�%d��.",rankDay);

        return 0;
}

//�ж��Ƿ�������
bool IsBissextile(int year)
{
    if((year %4 == 0 && year%100 != 0) || (year%400 == 0))  //���귵��true
        return true;
}

//�ж���һ���еĵڼ���
int YearDay(int year,int month, int day)
{
    int array1[12]={31,28,31,30,31,30,31,31,30,31,30,31};        //��¼����
    int array2[12]={31,29,31,30,31,30,31,31,30,31,30,31};        //��¼ƽ��
    int rankDay=0;

    if(IsBissextile(year)){ //��������
        for(int i=0; i<month-1; i++){
            rankDay += array1[i];
        }
        rankDay += day;
    }else{
        for(int i=0; i<month-1; i++){
            rankDay += array2[i];
        }
        rankDay += day;
    }

    return rankDay;
}
