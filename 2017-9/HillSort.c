//HillSort.c -- 希尔排序，直接插入排序的改进版。
 /*
 *思路：还记得直接插入排序中的增量吗？
 *for(int i=2; i<=n; i++)  // 我们这里的增量是一，如果我们改变此处的增量，不断的对小部分进行直接插入排序呢？
 *{
 *      array[0] = array[i];
 *      int j=i-1;
 *      while(array[0]<array[j])
        {
 *          array[j+1] = array[j];
            j--;
        }
        array[j+1] = array[0];
        */

/*
    如果我们想要实现”分而治之“，想想应该怎么做呢？
*/
int main()
{
    int array[10] = {12,23,2,4,56,43,1,10,22,11};
    ShellSort(array,10);
    for(int i=0; i<10; i++)
        printf("%d",array[i]);
}

//ShellInsertSort
int ShellInsertSort(int array[], int n, int dk)
{
    int sentry;
    for(int i = dk; i<n; i++)
    {
        sentry = array[i];
        int j = i-dk;
        while(sentry <array[j])
        {
            array[j+dk] = array[j];
            j= j-dk;
        }
        array[j+dk] = sentry;
    }
}

//ShellSOrt
void ShellSort(int a[],int SIZE)
{
    int dk = SIZE/2;
    while(dk>=1){
         ShellInsertSort(a,SIZE,dk);
         dk = dk/2;
    }

}
