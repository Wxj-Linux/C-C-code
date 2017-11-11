//PartApple.c -- 巧分苹果
/*
    利用数组和循环进行解决，
    1、设定一个数组：array[6];
    2、a[i] = a[i-1]/(9-i)
    3、最后进行数组求和，结果我们是已知的
    4、不是我们知道一个结果：最后所有人的苹果是一样多的。逆序
*/

#include <stdio.h>

int main()
{
    int apple[6];
    int sum = 2520;

    for(int i=0; i<6; i++)
    {
        a[i] = a[i]*(3+i)/(2+i);
        sum += a[i];    //加到最后这个应该是2520
    }
}
