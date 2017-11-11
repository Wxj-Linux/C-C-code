//Bissextile.c -- 判断是否是闰年，且今天是一年中的第几天，
//                  --如果可能的话转换成农历,加上鼠牛虎兔……

#include <stdio.h>
#include <stdbool.h>

bool IsBissextile(int year);
int YearDay(int,int,int);

int main()
{
    int year,month,day,rankDay;
    printf("请输入年份、月份、天：\n");
    scanf("%d%d%d",&year,&month,&day);
    rankDay = YearDay(year,month,day);
    if(IsBissextile(year))
        printf("今年是闰年，今天是一年中的第%d天.",rankDay);
    else
        printf("今年是平年，今天是一年中的第%d天.",rankDay);

        return 0;
}

//判断是否是闰年
bool IsBissextile(int year)
{
    if((year %4 == 0 && year%100 != 0) || (year%400 == 0))  //闰年返回true
        return true;
}

//判断是一年中的第几天
int YearDay(int year,int month, int day)
{
    int array1[12]={31,28,31,30,31,30,31,31,30,31,30,31};        //记录闰年
    int array2[12]={31,29,31,30,31,30,31,31,30,31,30,31};        //记录平年
    int rankDay=0;

    if(IsBissextile(year)){ //是闰年了
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
