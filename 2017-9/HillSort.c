//HillSort.c -- ϣ������ֱ�Ӳ�������ĸĽ��档
 /*
 *˼·�����ǵ�ֱ�Ӳ��������е�������
 *for(int i=2; i<=n; i++)  // ���������������һ��������Ǹı�˴������������ϵĶ�С���ֽ���ֱ�Ӳ��������أ�
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
    ���������Ҫʵ�֡��ֶ���֮��������Ӧ����ô���أ�
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
