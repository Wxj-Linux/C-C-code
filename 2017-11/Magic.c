//设计一个魔方阵
#include <stdio.h>

int main()
{
    int x=1,y = 3,magic[5][5]; //根据已知条件可知，1在第一行中间的位置，
    for(int i=1;i<=25;i++){
        magic[x][y] = i;
        if(x ==0 && y == 4){
            x = x+1;
            continue;   //结束本次循环
        }
        if(x==1)
            x = 5;
        else
            x--;
        if(y == 5)
            y = 1;
        else
            y++;
        if(magic[x][y] != 0){
            x = x+1;
            y = y-1;
        }
    }

    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            printf("%4d",magic[i][j]);
        }
        printf("\n");
    }
    return 0;

}
