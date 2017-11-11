//小数分离操作
//如果不借助现有的函数，我们如何操作
//1、当成字符数组进行操作。碰到小数点就开始执行操作了。
//2、
#include <stdio.h>

int main()
{
    char ch[20]; //定义一个大小
    printf("请输入一个小数：");
    for(int i=0; i<20; i++){
        scanf("%c",&ch[i]);
        if(ch[i] == '\n')   //执行换行操作么
           break;   //果然是，好久不编代码，蒙了。
        else
            continue;
    }
    for(int i=0; i<20; i++){
        if(ch[i] == '.'){
            printf("------------");
        }
    printf("%c",ch[i]);
    }

}
