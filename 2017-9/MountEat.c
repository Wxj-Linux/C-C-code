//猴子吃桃问题
#include <stdio.h>

int main()
{
    int sum =1; //定义为桃子的数量
   // printf("请输入桃子的数量：");
    //scanf("%d",&sum);
    for(int i=1; i<=9; i++)
        sum = (sum +1) *2;
    printf("最初有%d个桃子",sum);

    return 0;
}
