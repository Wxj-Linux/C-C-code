//百钱买百鸡问题
#include <stdio.h>

void main()
{
    int a,b,c; //分别定义为鸡翁，鸡母，稚鸡
    for(a=1; a<=20; a++)
        for(b=1; b<=33; b++)
            for(c=3; c<=100; c= c+3)    //自己怎么老是犯这种非常低级的毛病呢？真是不懂你自己哦。
            if(a*5 +b*3 +c/3 == 100 && a+b+c == 100){
                printf("鸡翁%d只，鸡母%d只，稚鸡%d只。\n",a,b,c);
            }
}
