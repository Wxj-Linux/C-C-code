//OutPut.c --��������ַ�
#include <stdio.h>

int main()
{
    printf("������һ���ַ�;\n");
    char wold ;
    wold = getchar();  //getchar()�������ڴ����û���õ��ַ����룬ͦ�õ�һ������
    printf("**");
    putchar(wold);
    printf("**\n");
    printf("������һ���ַ�;\n");
    wold = getch();
    printf("**");
    putchar(wold);
    printf("**\n");
    printf("������һ���ַ�;\n");
    wold = getche();
    printf("**");
    putchar(wold);
    printf("**\n");
    wold = wold -1;
    putchar(wold);
}
