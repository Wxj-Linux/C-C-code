#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define Size 30 //初始大小
typedef int ElemType;   //定义元素类型

typedef struct
{
    ElemType data[Size];
    int length; //数组长度
}SeqList;

//初始化数组
void Init_SeqList(SeqList *L,int n)
{
    int i;
    printf("请输入数组的数据：\n");
    for(i= 0;i<n; i++)
    {
        scanf("%d",&L->data[i]);
        L->length = n;
    }
}
//输出顺序表
void Show_SeqList(SeqList *L)
{
    int i;
    printf("该顺序表为：\n");
    for(i = 0 ; i< L->length ; i++)
        printf(" %d ",L->data[i]);
}
//数组排序操作
void Sort_SeqList(SeqList *L)   //冒泡排序
{
    int i,j;
    int exchange;
    for(i = 1; i<L->length; i++)
    {
        exchange = FALSE;
        for(j = L->length; j>= i; j--)
            if(L->data[j+1] < L->data[j])
        {
            L->data[0] = L->data[j+1];
            L->data[j+1] = L->data[j];
            L->data[j] = L->data[0];
            exchange = TRUE;
        }
        if(!exchange)       //本糖排序未发生交换，提前终止。
            return;
    }
}
//查找元素
void  Locate_SeqList(SeqList *L)
{
    int i,x;
    printf("请输入要查找的元素:\n");
    scanf("%d",&x);
    for(i= 0; i<L->length; i++)
    {
        if(L->data[i] == x)
            printf("该元素的位置为:%d\n",i);
    }
}
//插入元素
void Insert_SeqList(SeqList *L)
{
    int i,j, x;
    printf("请输入要插入的元素:\n");
    scanf("%d",&x);
    for(i = 0; i<L->length;i++)
    {
        if(x<L->data[i])
        {
            for(j = L->length; j>i;j--) //j可以为i+1
                L->data[j] = L->data[j-1];
            L->data[i] = x;
        }
    }
}
//删除元素
void Delete_SeqList(SeqList *L)
{
    int i,j,x;
    printf("请输入要删除的元素:\n");
    scanf("%d",&x);
    for(i = 0; i<L->length; i++)
     {
        if(x == L->data[i])
        {
            for(j= i; j<L->length-2;j++)
            L->data[j] = L->data[j+1];
        }
    }
}


int main(){
    SeqList l;
    l.length=0;
    int n;

    printf("请输入线性表长度:");
    scanf("%d",&n);
    Init_SeqList(&l,n);
      //先调用排序，然后在进行插入操作。
    Sort_SeqList(&l);
    Show_SeqList(&l);
    Locate_SeqList(&l);
    Show_SeqList(&l);
    Insert_SeqList(&l);
    Show_SeqList(&l);
    Delete_SeqList(&l);
    Show_SeqList(&l);
    printf("\n");
}
