//OutPut.c --输入输出字符
#include <stdio.h>

int main()
{
    printf("请输入一个字符;\n");
    char wold ;
    wold = getchar();  //getchar()可以用于处理掉没有用的字符输入，挺好的一个函数
    printf("**");
    putchar(wold);
    printf("**\n");
    printf("请输入一个字符;\n");
    wold = getch();
    printf("**");
    putchar(wold);
    printf("**\n");
    printf("请输入一个字符;\n");
    wold = getche();
    printf("**");
    putchar(wold);
    printf("**\n");
    wold = wold -1;
    putchar(wold);
}
