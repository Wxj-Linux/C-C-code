#include <stdio.h>
#include <stdbool.h>
#define MaxSize 20

typedef struct  /*定义元素数据类型*/
{   char A[7];   //数据一
    char B[10];    //数据二
    char C[10]; //数据三
} ElemType;

//初始化
void Init_LinkList(int *Length_pointer)
{
    *Length_pointer=0;
}

//插入
int Insert_Last(ElemType Element[], int *Length_pointer, ElemType x)
{
    if(*Length_pointer == MaxSize)
    {
        printf("表满");
        return -1;
    }else
    {
        strcpy(Element[*Length_pointer].A,x.A);
        strcpy(Element[*Length_pointer].B,x.B);
        strcpy(Element[*Length_pointer].C,x.C);
        (*Length_pointer)++;    //线性表长度加一
        return 1;
    }
}

//查找指定元素
int Location_LinkList(ElemType Element[], int Length , char x)
{
    int i=0;
    while (i<Length && Element[i].A !=x)
        i++;
    if(i==Length) return -1;
        else return i+1;        //返回x的逻辑位置
}

//删除
int Delete_LinkList(ElemType Element[], int *Length_pointer, int i)
{
    int j;
    if(i<1 || i> *Length_pointer-1)
    {
        printf("不存在\n");
        return -1;
    }
    for(j = i-1; j<= *Length_pointer-1; j++)
        Element[j] = Element[j+1];  //向前移动
    (*Length_pointer)--;    //线性表长度减一
    return 1;
}

//遍历
void Show_LinkList(ElemType Element[], int Length)
{
    int j;
    if(Length == 0)
        printf("空表\n");
    else
        for(j=0; j<Length; j++)
        {
            printf(" %7s %7s %7s \n",Element[j].A,Element[j].B, Element[j].C);
            printf("\n");
        }
}

//清空
void SetNull_LinkList(int *Length_pointer)
{
    *Length_pointer = 0;
}

void main()
{
    int i, loca, del_id = 0;
    ElemType Element[MaxSize];
    int  Length;    //线性表长度
    char x_a[7], x_b[7], x_c[7];
    ElemType x;
    Init_LinkList(&Length);
        do
        {   printf ("\n");
            printf ("1---登记一个数据(Insert)\n");
            printf ("2---查询指定数据(Locate)\n");
            printf ("3---删除一个数据(Delete\n");
            printf ("4---显示所有数据(Show)\n");
            printf ("5---退出 \n");
            scanf ("%d",&i);
            switch(i)
			{   case 1: printf("Please enter A: ");  //数据一
                       scanf("%s",x.A);
                    printf("Please enter B: "); //数据二
                    scanf("%s",x.B);
                    printf("Please enter C: "); //数据三
                    scanf("%s",x.C);
                    if (Insert_Last (Element,&Length,x)!=1)
                      printf ("插入失败\n");
                     break;
            case 2:
                    printf("Please enter A: "); /*输入姓名*/
                    scanf("%s",x.A);
                    loca=Location_LinkList(Element,Length, x.A);
                    if (loca!=-1)
                      printf("查找成功(Found)!");
                    else
                      printf("查找失败!");
                    break;
            case 3:
                    printf("Please Delete A: "); /*输入姓名*/
                    scanf("%s", del_id);
                    if(Delete_LinkList(Element, Length,del_id)==1)
                        printf ("撤销配送\n");
                    else
                     printf ("没有找到该配送信息Fault\n");
                    break;
            case 4: Show_LinkList(Element,Length);break;
            case 5: break;
           default: printf("错误选择！Error 请重选");break;
            }
        } while (i!=5);
        SetNull_LinkList(&Length);                    /*清空线性表 */
    }


