//���ݽṹʵ�鱨��
//�༶������8��  ����:����  ѧ�ţ�U201813451  ������ڣ�2019��3��25��

//ʵ����Ŀ
//1.	ʵ������ Լɪ�򻷵�ʵ��
//2.	��Ҫ��� ��ʵ������ѭ��������������ݽṹ��ʵ����Լɪ����Ϸ��ģ����й��̣�����ʵ�����������Ϸ��������ÿ���˶�Ӧ�������Լ���ʼ��mֵ�Ĺ��ܡ�
//3.	��ϸ���
#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int code;
    int number;
    struct  list *next;
}list,node;
list *init(int n)
{
   list *L=(list*)malloc(sizeof(list));
   L->next=L;
   int i;
   list *r=L;
   L->number=1;
   for(i=1;i<n;i++)
   {

       list *p;
       p=(list*)malloc(sizeof(list));
      p->number=i+1;
       r->next=p;
       r=p;
       r->next=L;
   }
   return L;
}
void main()
{
    int n,i,m,j=1;
    list *prev=NULL;

    printf("������μ���Ϸ������n");
    scanf("%d",&n);
    list *L=init(n);
    printf("������ÿ���˵�����");
    list *p=L;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p->code);

       printf("%d %d\t",p->number,p->code);
        p=p->next;
    }
    printf("�������ʼ��m��ֵ");
    scanf("%d",&m);
    p=L;
    for(i=1;i<n;i++)
    {
        p=p->next;  //��pָ��L��ǰһ�����
    }


    while(j<=n)

    {
        for(i=1 ;i<m;i++)
        {
            p=p->next;
            //pָ��Ҫɾ���Ľ��ǰ;
        }

        list *prev=p->next;
        m=prev->code;
        printf("%d\t",prev->number);
        p->next=prev->next;
        free(prev);
       j++;
    }
}
