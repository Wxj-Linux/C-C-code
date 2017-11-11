#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define Size 30 //��ʼ��С
typedef int ElemType;   //����Ԫ������

typedef struct
{
    ElemType data[Size];
    int length; //���鳤��
}SeqList;

//��ʼ������
void Init_SeqList(SeqList *L,int n)
{
    int i;
    printf("��������������ݣ�\n");
    for(i= 0;i<n; i++)
    {
        scanf("%d",&L->data[i]);
        L->length = n;
    }
}
//���˳���
void Show_SeqList(SeqList *L)
{
    int i;
    printf("��˳���Ϊ��\n");
    for(i = 0 ; i< L->length ; i++)
        printf(" %d ",L->data[i]);
}
//�����������
void Sort_SeqList(SeqList *L)   //ð������
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
        if(!exchange)       //��������δ������������ǰ��ֹ��
            return;
    }
}
//����Ԫ��
void  Locate_SeqList(SeqList *L)
{
    int i,x;
    printf("������Ҫ���ҵ�Ԫ��:\n");
    scanf("%d",&x);
    for(i= 0; i<L->length; i++)
    {
        if(L->data[i] == x)
            printf("��Ԫ�ص�λ��Ϊ:%d\n",i);
    }
}
//����Ԫ��
void Insert_SeqList(SeqList *L)
{
    int i,j, x;
    printf("������Ҫ�����Ԫ��:\n");
    scanf("%d",&x);
    for(i = 0; i<L->length;i++)
    {
        if(x<L->data[i])
        {
            for(j = L->length; j>i;j--) //j����Ϊi+1
                L->data[j] = L->data[j-1];
            L->data[i] = x;
        }
    }
}
//ɾ��Ԫ��
void Delete_SeqList(SeqList *L)
{
    int i,j,x;
    printf("������Ҫɾ����Ԫ��:\n");
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

    printf("���������Ա���:");
    scanf("%d",&n);
    Init_SeqList(&l,n);
      //�ȵ�������Ȼ���ڽ��в��������
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
