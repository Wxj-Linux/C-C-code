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

void Init_SeqList(SeqList *L_pointer)          /*构造一个空表*/
{
    L_pointer->Length =0;
}

int  Insert_Last(SeqList *L_pointer,ElemType x)
{
    if  (L_pointer->Length==MaxSize)
    {   printf("表满");
        return OverFlow;
    }
    else
{   /*在表尾插入一个学生数据*/

/*输入序号*/
L_pointer->Length ++ ;  /*线性表长度加1*/
        return OK;             /*插入成功，返回*/
        }
    }
    int Location_SeqList(SeqList *L_pointer, char *x)/*查找指定姓名的配送数据*/
    {
        int i=0;
        while(i< L_pointer ->Length && strcmp(L_pointer ->Element[i] .name,x))
            i++;
        if (i== L_pointer ->Length)  return -1;  /*查找失败*/
        else  return i+1;    /*返回x的逻辑位置 */
    }

    int  Delete_SeqList(SeqList * L_pointer, int i)/*删除线性表的第i个元素*/
    {
        int  j;
        if(i<1 || i> L_pointer ->Length)  /*判断参数的正确性*/
        {
            printf ("不存在第i个元素");
            return Error ;
        }
        for(j=i-1;j<=L_pointer ->Length-1; j++)      /*删除*/
            L_pointer ->Element[j]= L_pointer ->Element[j+1]; /*向左移动*/
        L_pointer ->Length--;                         /*线性表长度减1*/
        return  OK ;
    }

  void Show_SeqList(SeqList * L_pointer)  /*遍历线性表*/
    {   int  j;
        printf("\n");
        if (L_pointer ->Length==0)
            printf("空表(NULL)!\n");
        else
          for(j=0;j< L_pointer ->Length; j++)              /*显示*/
            printf(" %7s  %10s  %10s  %7s  \n ",
            L_pointer->Element[j].num, L_pointer->Element[j].id,
            L_pointer->Element[j].name, L_pointer->Element[j].addr);
            printf("\n");
    }

 void SetNull_SeqList(SeqList * L_pointer)   /*清空线性表 */
    {
      L_pointer->Length =0;
    }

   void  main()
    {
        int i,loca,del_id=0;
        ElemType y;
        SeqList x,*Lx_pointer;

        Lx_pointer=&x;

        Init_SeqList(Lx_pointer);       /*构造一个空表 */
        do
        {   printf ("\n");
            printf ("1---插入一个配送信息(Insert)\n");
            printf ("2---查询一个配送信息(Locate)\n");
            printf ("3---删除一个配送信息(Delete\n");
            printf ("4---显示所有配送信息(Show)\n");
            printf ("5---退出\n");
            scanf ("%d",&i);
            switch(i)
            {   case 1: printf ("请输入要插入的配送信息\n");
                       printf("Please enter number: ");  /*输入序号*/
                       scanf("%s",y.num);
                       printf("Please enter id: "); /*输入配送序号*/
                       scanf("%s",y.id);
                       printf("Please enter name: "); /*输入姓名*/
                       scanf("%s",y.name);
                       printf("Please enter address: "); /*输入地址*/
                       scanf("%s",y.addr);
                      if (Insert_Last(Lx_pointer,y)!=OK)
                          printf ("插入失败\n");
                      break;
                case 2: printf ("请输入要查询的配送信息姓名\n"); scanf("%s",y.name);
                      loca=Location_SeqList(Lx_pointer,y.name);
                      if (loca!=-1) printf("查找成功!存储位置：%d",loca);
                      else printf("查找失败!");
                      break;
                case 3: printf ("请输入要删除的配送信息姓名\n"); scanf ("%s",y.name);
                      loca=Location_SeqList(Lx_pointer,y.name);
                      if (loca!=-1)
                          if(Delete_SeqList(Lx_pointer,loca)!=OK)
                              printf ("删除失败\n");
                      break;
                case 4: Show_SeqList(Lx_pointer);break;
                case 5: break;
                default:printf("错误选择！请重选");break;
           }
        } while (i!=5);
        SetNull_SeqList(Lx_pointer);/*清空线性表 */
}



