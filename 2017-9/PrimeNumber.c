//PrimeNumber.c -- 求解100-200 之间的素数
#include <stdio.h>
#include <stdbool.h>

bool Prime(int i,int n);

int main()
{
    int floor, up;
    printf("请你输入上下限floor,up\n");
    scanf("%d%d",&floor,&up);

    for(int i=floor; i<=up; i++)
    {
         if(Prime(i,up))     //符合条件，输出相应的数
            printf("%d",i);
    }

}




//分步骤进行，
bool Prime(int i,int n) //这样可以更好点
{
    for(int i; i<=n; i++)
    {
        if(n%i == 0)    //不符合条件的就退出
            return false;
    }
    return true;
}
