#include "stdio.h"
#include "String.h"
#define MaxSize 20
#define OverFlow -1
#define OK 1
#define Error -1

typedef struct
{
    char num[10];
}ElemType,Element;

typedef struct node
{
    ElemType data;
    int Length;
    struct node *next;
}SeqList;

void Init_SeqList(SeqList *L_pointer)          /*����һ���ձ�*/
{
    L_pointer->Length =0;
}

int  Insert_Last(SeqList *L_pointer,ElemType x)
{
    if  (L_pointer->Length==MaxSize)
    {   printf("����");
        return OverFlow;
    }
    else
{   /*�ڱ�β����һ��ѧ������*/

/*�������*/
L_pointer->Length ++ ;  /*���Ա��ȼ�1*/
        return OK;             /*����ɹ�������*/
        }
    }
    int Location_SeqList(SeqList *L_pointer, char *x)/*����ָ����������������*/
    {
        int i=0;
        while(i< L_pointer ->Length && strcmp(L_pointer ->Element[i] .name,x))
            i++;
        if (i== L_pointer ->Length)  return -1;  /*����ʧ��*/
        else  return i+1;    /*����x���߼�λ�� */
    }

    int  Delete_SeqList(SeqList * L_pointer, int i)/*ɾ�����Ա�ĵ�i��Ԫ��*/
    {
        int  j;
        if(i<1 || i> L_pointer ->Length)  /*�жϲ�������ȷ��*/
        {
            printf ("�����ڵ�i��Ԫ��");
            return Error ;
        }
        for(j=i-1;j<=L_pointer ->Length-1; j++)      /*ɾ��*/
            L_pointer ->Element[j]= L_pointer ->Element[j+1]; /*�����ƶ�*/
        L_pointer ->Length--;                         /*���Ա��ȼ�1*/
        return  OK ;
    }

  void Show_SeqList(SeqList * L_pointer)  /*�������Ա�*/
    {   int  j;
        printf("\n");
        if (L_pointer ->Length==0)
            printf("�ձ�(NULL)!\n");
        else
          for(j=0;j< L_pointer ->Length; j++)              /*��ʾ*/
            printf(" %7s  %10s  %10s  %7s  \n ",
            L_pointer->Element[j].num, L_pointer->Element[j].id,
            L_pointer->Element[j].name, L_pointer->Element[j].addr);
            printf("\n");
    }

 void SetNull_SeqList(SeqList * L_pointer)   /*������Ա� */
    {
      L_pointer->Length =0;
    }

   void  main()
    {
        int i,loca,del_id=0;
        ElemType y;
        SeqList x,*Lx_pointer;

        Lx_pointer=&x;

        Init_SeqList(Lx_pointer);       /*����һ���ձ� */
        do
        {   printf ("\n");
            printf ("1---����һ��������Ϣ(Insert)\n");
            printf ("2---��ѯһ��������Ϣ(Locate)\n");
            printf ("3---ɾ��һ��������Ϣ(Delete\n");
            printf ("4---��ʾ����������Ϣ(Show)\n");
            printf ("5---�˳�\n");
            scanf ("%d",&i);
            switch(i)
            {   case 1: printf ("������Ҫ�����������Ϣ\n");
                       printf("Please enter number: ");  /*�������*/
                       scanf("%s",y.num);
                       printf("Please enter id: "); /*�����������*/
                       scanf("%s",y.id);
                       printf("Please enter name: "); /*��������*/
                       scanf("%s",y.name);
                       printf("Please enter address: "); /*�����ַ*/
                       scanf("%s",y.addr);
                      if (Insert_Last(Lx_pointer,y)!=OK)
                          printf ("����ʧ��\n");
                      break;
                case 2: printf ("������Ҫ��ѯ��������Ϣ����\n"); scanf("%s",y.name);
                      loca=Location_SeqList(Lx_pointer,y.name);
                      if (loca!=-1) printf("���ҳɹ�!�洢λ�ã�%d",loca);
                      else printf("����ʧ��!");
                      break;
                case 3: printf ("������Ҫɾ����������Ϣ����\n"); scanf ("%s",y.name);
                      loca=Location_SeqList(Lx_pointer,y.name);
                      if (loca!=-1)
                          if(Delete_SeqList(Lx_pointer,loca)!=OK)
                              printf ("ɾ��ʧ��\n");
                      break;
                case 4: Show_SeqList(Lx_pointer);break;
                case 5: break;
                default:printf("����ѡ������ѡ");break;
           }
        } while (i!=5);
        SetNull_SeqList(Lx_pointer);/*������Ա� */
}



