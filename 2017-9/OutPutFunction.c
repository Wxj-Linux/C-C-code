//����������������
#include <stdio.h>

int main()
{
    char words[8];

    puts("Enter a string please.\n");
    gets(words);        //gets�����������Ƿ�����ô��Ŀռ�ȥ�����Щ����
    printf("Your String twice:\n");
    printf("%s\n",words);
    puts(words);
    fgets(words,4,stdin); //fgets�ı���gets��һЩȱ�㣬ָ���˴�С��
                    //������������һ�����з�,stdinΪ��׼��������
    fputs(words,stdout);    //������ĩβ��һ��\n���������ʱ��û�л���
    puts("\nDone.\n");


    fgets(words,4,stdin); //fgets�ı���gets��һЩȱ�㣬ָ���˴�С��
                    //������������һ�����з�,stdinΪ��׼��������
    fputs(words,stdout);    //������ĩβ��һ��\n���������ʱ��û�л���
    puts("\nDone.");

    return 0;

}
