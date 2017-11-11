#include <stdio.h>

int main()
{
    int n; //最初始的份数
    float sum1,sum2;  //第一个人和第二个人取的的份数
    for(n=11;;n++)  //不设置上限，在循环中自己跳出循环
                    //其实似乎可以利用while好像也是可以的，不过好像麻烦点
    {
        sum1 = (n+9)/10.0;
        sum2 = (171 +9*n)/100.0;    //我还是有点儿不太明白，为什么要设定成float呢？最后为什么转换成int呢？
                                    //也许程序设计的巧妙之处就是在这里。
        if(!(sum1 ==(int) sum1))  continue;   //都应为整数

        if(!(sum2)==(int)sum2) continue;      //保证sum2为整数

        if(sum1 == sum2) break;
    }

    printf("共有%d个学生，\n将糖果分成了%d份",(int)(n/sum1),n);

    printf("\n");

}
