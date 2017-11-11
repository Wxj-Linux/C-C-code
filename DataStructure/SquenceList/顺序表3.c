#include "stdio.h"
#include "stdlib.h"

#define TRUE 1
#define FALSE 0
#define listsize 100

typedef struct{
    int data[listsize];
    int length;
}Seqlist;


int main(){
    void createlist(Seqlist *l,int n);
    void printlist(Seqlist *l,int n);
    void locateElem(Seqlist *l,int n);
    void listinsert(Seqlist *l,int i,int n);
    void listdelete(Seqlist *l,int i,int n);
    void Sort_SeqList(Seqlist *L);
    int n;
    int i=0;
    Seqlist l;
    l.length=0;

    printf("请输入线性表长度:");
    scanf("%d",&n);
    createlist(&l,n);
    printlist(&l,n);
    Sort_SeqList(&l);
    locateElem(&l,n);
    Sort_SeqList(&l);
    printlist(&l,n);
    listinsert(&l,i,n);
    Sort_SeqList(&l);
    printlist(&l,n);
    listdelete(&l,i,n);
    Sort_SeqList(&l);
    printlist(&l,n);
    printf("\n");
}

//新建顺序表

void createlist(Seqlist *l,int n)
{
    int i;
    printf("请输入顺序表元素：\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&l->data[i]);
        l->length=n;
    }
}

//输出顺序表

void printlist(Seqlist *l,int n)
{
    int i;
    printf("顺序表为：");
    for(i=0;i<n;i++)
    {
        printf("%d ",l->data[i]);
    }
}
//冒泡排序
void Sort_SeqList(Seqlist *L)
{
    int i,j;
    int exchange;
    for(i = 1; i<L->length; i++)
    {
        exchange = FALSE;
        for(j = L->length; j>= i; j--)
            if(L->data[j+1]<L->data[j])
        {
            L->data[0] = L->data[j+1];
            L->data[j+1] = L->data[j];
            L->data[j] = L->data[0];
            exchange = TRUE;
        }
        if(!exchange)       //本糖排序未发生交换，提前终止。
            return;
    }
    for(i = 1; i<L->length; i++)
        printf(" %d ",L->data[i]);
}

//查找元素

void locateElem(Seqlist *l,int n)
{
    int i=1,*p;
    p=l->data;
    printf("\n请输入要查找的元素n:");
    scanf("%d",&n);
    while(i<=l->length&&(*p++!=n)) ++i;
    if(i<=l->length)
    printf("要查找的数的位置为：%d",i);
}

//插入元素

void listinsert(Seqlist *l,int i,int n)
{
    int *q,*p;
    printf("\n请输入要插入的数：");
    scanf("%d",&n);

    if(l->length==0)
    {
        l->data[0]=n;
        ++l->length;

    }
    q=&(l->data[0]);
    while((*q<=n)&&(q<=&(l->data[l->length-1])))
    {
        ++q;
    }
    ++l->length;
    for(p=&(l->data[l->length-1]);p>=q;--p)
    {
    *(p+1)=*p;
    *p=n;
    }

 printf("输出新表:\n");
        for(i=0;i<l->length;i++)
     {
        printf("%d ",l->data[i]);
     }
}

//删除元素

void listdelete(Seqlist *l,int i,int n)
{
    int *p,*q;
    printf("\n请输入要删除的数的位置：");
    scanf("%d",&i);

    if(i<1||i>l->length)
    printf("删除元素失败!");

    p=&l->data[i-1];
    n=*p;
    q=l->data+l->length-1;
    for(++p;p<=q;++p)
    {
         *(p-1)=*p;
         --l->length;

    }

    for(i=0;i<l->length+1;i++)
    {
        printf("%d ",l->data[i]);
    }
}
