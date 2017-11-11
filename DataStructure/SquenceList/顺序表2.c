#include <stdio.h>
#include <stdbool.h>
#define MaxSize 20

typedef struct  /*����Ԫ����������*/
{   char A[7];   //����һ
    char B[10];    //���ݶ�
    char C[10]; //������
} ElemType;

//��ʼ��
void Init_LinkList(int *Length_pointer)
{
    *Length_pointer=0;
}

//����
int Insert_Last(ElemType Element[], int *Length_pointer, ElemType x)
{
    if(*Length_pointer == MaxSize)
    {
        printf("����");
        return -1;
    }else
    {
        strcpy(Element[*Length_pointer].A,x.A);
        strcpy(Element[*Length_pointer].B,x.B);
        strcpy(Element[*Length_pointer].C,x.C);
        (*Length_pointer)++;    //���Ա��ȼ�һ
        return 1;
    }
}

//����ָ��Ԫ��
int Location_LinkList(ElemType Element[], int Length , char x)
{
    int i=0;
    while (i<Length && Element[i].A !=x)
        i++;
    if(i==Length) return -1;
        else return i+1;        //����x���߼�λ��
}

//ɾ��
int Delete_LinkList(ElemType Element[], int *Length_pointer, int i)
{
    int j;
    if(i<1 || i> *Length_pointer-1)
    {
        printf("������\n");
        return -1;
    }
    for(j = i-1; j<= *Length_pointer-1; j++)
        Element[j] = Element[j+1];  //��ǰ�ƶ�
    (*Length_pointer)--;    //���Ա��ȼ�һ
    return 1;
}

//����
void Show_LinkList(ElemType Element[], int Length)
{
    int j;
    if(Length == 0)
        printf("�ձ�\n");
    else
        for(j=0; j<Length; j++)
        {
            printf(" %7s %7s %7s \n",Element[j].A,Element[j].B, Element[j].C);
            printf("\n");
        }
}

//���
void SetNull_LinkList(int *Length_pointer)
{
    *Length_pointer = 0;
}

void main()
{
    int i, loca, del_id = 0;
    ElemType Element[MaxSize];
    int  Length;    //���Ա���
    char x_a[7], x_b[7], x_c[7];
    ElemType x;
    Init_LinkList(&Length);
        do
        {   printf ("\n");
            printf ("1---�Ǽ�һ������(Insert)\n");
            printf ("2---��ѯָ������(Locate)\n");
            printf ("3---ɾ��һ������(Delete\n");
            printf ("4---��ʾ��������(Show)\n");
            printf ("5---�˳� \n");
            scanf ("%d",&i);
            switch(i)
			{   case 1: printf("Please enter A: ");  //����һ
                       scanf("%s",x.A);
                    printf("Please enter B: "); //���ݶ�
                    scanf("%s",x.B);
                    printf("Please enter C: "); //������
                    scanf("%s",x.C);
                    if (Insert_Last (Element,&Length,x)!=1)
                      printf ("����ʧ��\n");
                     break;
            case 2:
                    printf("Please enter A: "); /*��������*/
                    scanf("%s",x.A);
                    loca=Location_LinkList(Element,Length, x.A);
                    if (loca!=-1)
                      printf("���ҳɹ�(Found)!");
                    else
                      printf("����ʧ��!");
                    break;
            case 3:
                    printf("Please Delete A: "); /*��������*/
                    scanf("%s", del_id);
                    if(Delete_LinkList(Element, Length,del_id)==1)
                        printf ("��������\n");
                    else
                     printf ("û���ҵ���������ϢFault\n");
                    break;
            case 4: Show_LinkList(Element,Length);break;
            case 5: break;
           default: printf("����ѡ��Error ����ѡ");break;
            }
        } while (i!=5);
        SetNull_LinkList(&Length);                    /*������Ա� */
    }


