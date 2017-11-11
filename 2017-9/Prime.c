//Prime.c --判断一个数是否是素数
#include <stdio.h>

int Prime2(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)    //不符合条件
            continue;
    }
}

int main()
{

}
