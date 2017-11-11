#include <stdio.h>
#include <string.h>

#define SIZE 20

typedef int DataType;
typedef struct list
{
    DataType data[SIZE];
    int length;
}Seqlist;

//��������
int FindSeq(Seqlist *L,DataType x)
{
    int lo, hi,mi;
    lo = 0; hi = L->length;
    while(lo<hi){
		mi = (lo+hi)/2;		//miΪ�м�λ�õ�ֵ
		if(x<L->data[mi])
			hi=mi;
		else
			lo=mi+1; //�ڡ�lo��mi���ͣ�mi��hi������
	}
	return --lo; 	//--
}

//�޸�����
int ChangeSeq(Seqlist *L, DataType x,int i) //�޸�iλ�õ�����
{
    L->data[i] = x;     //���ò����ҵ�iλ��
    return i;
}

//ɾ������
int DeleteSeq(Seqlist *L, int i)    //ɾ������key,λ��i
{
    int j;
    for(j= i; j<L->length; j++)    //������ǰ��
    {
        L->data[j+1] = L->data[j];  //��i+1��ʼ��ǰ��
        L->length = L->length - 1;  //������ĳ�������
    }
    return 0;   //����ɾ�������ݣ������һ��
}

//��������
int InsertSeq(Seqlist *L,DataType x,int i)  //iΪ�����λ��
{
    int j;
    if(L->length > SIZE)
    {
        printf("\n���");
        return -1;
    }
    else if((i<1)||(i>L->length +1))    //���ò����ҵ�i��λ��
    {
        printf("\nλ������");
        return -1;
    }
    else
    {
        for(j= L->length-1; j>=i-1; j--)
        {
            L->data[j+1] = L->data[j];  //��ʼ�����λ��
            L->data[i-1] = x;         //���ҵ���λ�ø�ֵ.
            L->length = L->length + 1;  //������ĳ�������
        }
        return L->length;
    }
}
//��ʼ������
int InitSeq(Seqlist *L,int a[])
{
    int i;
    for(i = 0;i<SIZE; i++)
    {
        InsertSeq(L,a[i],i);
    }
    return 1;
}

//�������鳤��
int Length(Seqlist *L)
{
    return L->length;
}

//����
void ShowSeq(Seqlist *L)
{
    int i;
    printf("\n�����鼯��Ϊ��");
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
    printf("\n���ҵ���:");
    scanf("%d",&fd);
    bk = FindSeq(&l,fd);
    if(bk <0){
        printf("\nʧ��");
        ShowSeq(&l);}
    else{
        printf("\nλ��Ϊ %d",bk);
        ShowSeq(&l);
    }
    printf("\n�������");
    scanf("%d",&fd);
    biao = FindSeq(&l,fd);
    if(bk == -1){
        printf("\nʧ��");
        ShowSeq(&l);}
    else{
        bk = InsertSeq(&l,fd,biao);
        printf("\n����ɹ���λ��Ϊ:%d",bk);
        ShowSeq(&l);
    }
    printf("\n������ɾ��������:");
    scanf("%d",&fd);
    biao = FindSeq(&l,fd);
     if(bk == -1){
        printf("\nʧ��");
        ShowSeq(&l);}
    else{
        bk = DeleteSeq(&l,fd);
        printf("\nɾ���ɹ���λ��Ϊ:%d",bk);
         ShowSeq(&l);
    }

}
