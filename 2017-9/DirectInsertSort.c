//DiretInsertSort.c -- 直接插入排序
/*
*思想：从无序组中往有序数组中插入数据
*/

#include <stdio.h>

//定义一个
int main()
{
    //我们可以另外定义一个哨兵，不一定非的是数组里
    int array[10] = {12,23,2,4,56,43,1,10,22,11};    //直接定义是个数字
    int sentry = array[0]; //哨兵
    int j;
    for(int i=1; i<10; i++)
    {
        sentry = array[i]; //哨兵弄错了
        j = i-1;
        while(sentry < array[j] && j>=0) //记得这里最好是做一个最坏的判断
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = sentry;
    }
    for(int i=0; i<10; i++)
        printf(" %d ",array[i]);
}
/*
*后续：每次看都有不一样的感觉，这一次感觉自己是真的懂了，
*应该考虑到各种不一样的极端的情况。
*/
