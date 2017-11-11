//GloblueDrop.c -- 经典的小球下落问题，
/*
    想法：1、我们不知道它会经过多少次停下，按照规则，它应该是无限趋近于0，
            但就是不会停下。
            high = high/2;
          2、幸好的是我们一般是会让你求解能找到答案的题目，这种无脑的当然不会出现
*/

#include <stdio.h>

int main()
{
    float high; //小球的高度
    int n; //小球下落的次数
    printf("请输入小球的初始高度：");
    scanf("%f",&high);      //注意这些细节之处，真的是很重要的啊！
    float allHigh = high; //小球运行的总长度
    printf("请输入下落的次数：");
    scanf("%d",&n);
    for(int i=1; i<n; i++)
    {
        high = high/2;
        allHigh += high*2;
    }
    printf("小球运行的路程为：%f",allHigh);
    printf("小球最后一次跳到了：%f",high);
}
