#include <stdio.h>

int main()
{
    int i,j,k=0,l,n,m,sum,flag=1;
    printf("请输入一个数：");
    scanf("%d",&n);
    m = n*n*n;
    i =m/2;     //立方数的一半
    if(i%2 == 0)
        i++;
    while(flag == 1 && i>=1)
    {
        sum =0;
        k =0;
        while(1)
        {
            sum += (i-2*k);     //你这样不也是利用推导出来的数学公式么？我还以为是穷取法呢？
            k++;
            if(sum == m)
            {
                printf("%d * %d * %d = %d =",n,n,n,m);
                for(l =0; l<k-1; l++)
                    printf(" %d + ",i-l*2);
                printf(" %d + ",i-(k-1)*2);
                flag = 0;
                break;
            }
            if(sum >m)
                break;
        }
        i -= 2;
    }
}
