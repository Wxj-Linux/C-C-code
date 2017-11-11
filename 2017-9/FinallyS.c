//求某个数任意次方后的最后三位
/*
*   思路：因为在程序中不能直接 a^b 这样表示，我们只能借助于循环操作来实现
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
    int a, b; //分别为底数和幂
    int sum = a; //最后次方后得到的数字
    printf("请输入一个数和该数的次方：");
    scanf("%d %d",&a, &b);
    for(int i=0; i<b; i++)
        sum = sum *a;   //不断的进行方
    //截取最后的三位
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
    printf("\n请输入x和y（x^y)\n");
    scanf("%d %d",&x, &y);
    for(int i=1; i<= y; i++)
        z = z*x %1000;  //非常巧妙的一布，我们是求解后三位的操作的
    if(z >= 100)
        printf("后三位是：%d",z);
    else
        printf("后三位是：0%d",z);
}

/*
* 我们输入任意的数字进行拆分
*
*/
int finally()
{
    printf("请输入一个数字进行拆分：");
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
