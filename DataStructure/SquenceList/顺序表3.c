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

    printf("���������Ա���:");
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

//�½�˳���

void createlist(Seqlist *l,int n)
{
    int i;
    printf("������˳���Ԫ�أ�\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&l->data[i]);
        l->length=n;
    }
}

//���˳���

void printlist(Seqlist *l,int n)
{
    int i;
    printf("˳���Ϊ��");
    for(i=0;i<n;i++)
    {
        printf("%d ",l->data[i]);
    }
}
//ð������
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
        if(!exchange)       //��������δ������������ǰ��ֹ��
            return;
    }
    for(i = 1; i<L->length; i++)
        printf(" %d ",L->data[i]);
}

//����Ԫ��

void locateElem(Seqlist *l,int n)
{
    int i=1,*p;
    p=l->data;
    printf("\n������Ҫ���ҵ�Ԫ��n:");
    scanf("%d",&n);
    while(i<=l->length&&(*p++!=n)) ++i;
    if(i<=l->length)
    printf("Ҫ���ҵ�����λ��Ϊ��%d",i);
}

//����Ԫ��

void listinsert(Seqlist *l,int i,int n)
{
    int *q,*p;
    printf("\n������Ҫ���������");
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

 printf("����±�:\n");
        for(i=0;i<l->length;i++)
     {
        printf("%d ",l->data[i]);
     }
}

//ɾ��Ԫ��

void listdelete(Seqlist *l,int i,int n)
{
    int *p,*q;
    printf("\n������Ҫɾ��������λ�ã�");
    scanf("%d",&i);

    if(i<1||i>l->length)
    printf("ɾ��Ԫ��ʧ��!");

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
