//GoldbachGuess.c --歌德巴赫猜想
/*
100以内的正偶数都能分解成两个素数之和
*/
#include <stdio.h>

int main()
{
    int measure; //待测数字
    int array[100]; //用于存放100以内的素数
    //int sums=0; //用于判断是否是素数>2
    int k=1;    //用于存放素数在数组中的位置
    printf("请输入一个100以内的正偶数。");
    scanf("%d",&measure);
    array[0] = 1;

    //找出100以内的所有素数
    for(int i=2; i<100;i++)
        for(int j=2; j<i; j++)
    {
        //if(i/j == 0) sums++;    //自己或者是1被整除就行了，所以应该加一个sums，用于判断她只有两个
                                //我是傻了吗？可以控制1和自己啊！笨
        //if(sums == 2) //是素数
        if(i%j == 0)
           break; //将素数的值赋予到数组array中

        array[k++] = i;
        }


    for(int i=0; i<=k; i++){
        printf(" %d ",array[i]);
    }

/*
    //验证猜想
    for(int i=0; i<=k; i++)
        for(int j=0; j<=k; j++)
            if(array[i] +array[j] == measure)
               // printf("%d可以用：%d和%d表示。",measure,&array[i],&array[j]);
*/
    return 0;
}
