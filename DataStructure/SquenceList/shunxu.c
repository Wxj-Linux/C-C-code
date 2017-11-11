#include <stdio.h>
#include <string.h>

#define SIZE 20

typedef int DataType;
typedef struct list
{
    DataType data[SIZE];
    int length;
}Seqlist;

//查找数据
int FindSeq(Seqlist *L,DataType x)
{
    int lo, hi,mi;
    lo = 0; hi = L->length;
    while(lo<hi){
		mi = (lo+hi)/2;		//mi为中间位置的值
		if(x<L->data[mi])
			hi=mi;
		else
			lo=mi+1; //在【lo，mi）和（mi，hi）中找
	}
	return --lo; 	//--
}

//修改数据
int ChangeSeq(Seqlist *L, DataType x,int i) //修改i位置的数据
{
    L->data[i] = x;     //利用查找找到i位置
    return i;
}

//删除数据
int DeleteSeq(Seqlist *L, int i)    //删除数据key,位置i
{
    int j;
    for(j= i; j<L->length; j++)    //集体往前窜
    {
        L->data[j+1] = L->data[j];  //从i+1开始往前窜
        L->length = L->length - 1;  //将数组的长度增加
    }
    return 0;   //返回删除的数据，看最后一眼
}

//插入数据
int InsertSeq(Seqlist *L,DataType x,int i)  //i为插入的位置
{
    int j;
    if(L->length > SIZE)
    {
        printf("\n溢出");
        return -1;
    }
    else if((i<1)||(i>L->length +1))    //利用查找找到i的位置
    {
        printf("\n位置有误");
        return -1;
    }
    else
    {
        for(j= L->length-1; j>=i-1; j--)
        {
            L->data[j+1] = L->data[j];  //开始往后窜位置
            L->data[i-1] = x;         //将找到的位置赋值.
            L->length = L->length + 1;  //将数组的长度增加
        }
        return L->length;
    }
}
//初始化数组
int InitSeq(Seqlist *L,int a[])
{
    int i;
    for(i = 0;i<SIZE; i++)
    {
        InsertSeq(L,a[i],i);
    }
    return 1;
}

//计算数组长度
int Length(Seqlist *L)
{
    return L->length;
}

//遍历
void ShowSeq(Seqlist *L)
{
    int i;
    printf("\n该数组集合为：");
    for(i = 0; i < L->length; i++)
        printf(" %d ",L->data[i]);
}

int main()
{
    Seqlist l;
    l.data[0] = 1;l.data[1] = 2;l.data[3] = 4;l.data[2] = 3;l.data[4] = 5;
    l.length = 5;
    int biao;
    int fd,bk;
    ShowSeq(&l);
    printf("\n查找的数:");
    scanf("%d",&fd);
    bk = FindSeq(&l,fd);
    if(bk <0){
        printf("\n失败");
        ShowSeq(&l);}
    else{
        printf("\n位置为 %d",bk);
        ShowSeq(&l);
    }
    printf("\n插入的数");
    scanf("%d",&fd);
    biao = FindSeq(&l,fd);
    if(bk == -1){
        printf("\n失败");
        ShowSeq(&l);}
    else{
        bk = InsertSeq(&l,fd,biao);
        printf("\n插入成功，位置为:%d",bk);
        ShowSeq(&l);
    }
    printf("\n请输入删除的数据:");
    scanf("%d",&fd);
    biao = FindSeq(&l,fd);
     if(bk == -1){
        printf("\n失败");
        ShowSeq(&l);}
    else{
        bk = DeleteSeq(&l,fd);
        printf("\n删除成功，位置为:%d",bk);
         ShowSeq(&l);
    }

}
