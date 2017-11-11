//BubbleSort.c --基础冒泡排序
#include <stdio.h>

int main()
{
    int array[10] = {12,23,2,4,56,43,1,10,22,11};
    for(int i=1; i<10; i++)
        for(int j=1; j<11-i; j++)       //今天终于是明白冒泡了，不容易啊！怎么以前没有想到呢？
            //真是笨啊！鄙视自己！！！
            //多动笔画画就好了，一下子就明白什么了。知道吗？
    {
        if(array[j] >array[j-1])
        {
            int swap = array[j];
            array[j] = array[j-1];
            array[j-1] = swap;
        }
    }
    for(int i=0; i<10; i++)
        printf(" %d ",array[i]);
}
