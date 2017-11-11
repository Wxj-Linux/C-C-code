//经典的输入输出函数
#include <stdio.h>

int main()
{
    char words[8];

    puts("Enter a string please.\n");
    gets(words);        //gets不会检测数组是否有这么多的空间去存放这些数据
    printf("Your String twice:\n");
    printf("%s\n",words);
    puts(words);
    fgets(words,4,stdin); //fgets改变了gets的一些缺点，指定了大小，
                    //并且最后加上了一个换行符,stdin为标准键盘输入
    fputs(words,stdout);    //不会在末尾加一个\n所以输出的时候没有换行
    puts("\nDone.\n");


    fgets(words,4,stdin); //fgets改变了gets的一些缺点，指定了大小，
                    //并且最后加上了一个换行符,stdin为标准键盘输入
    fputs(words,stdout);    //不会在末尾加一个\n所以输出的时候没有换行
    puts("\nDone.");

    return 0;

}
