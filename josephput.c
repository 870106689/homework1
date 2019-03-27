//数据结构实验报告
//班级：电信8班  姓名:周宇  学号：U201813451  完成日期：2019年3月25日

//实验项目
//1.	实验内容 约瑟夫环的实现
//2.	概要设计 本实验运用循环单链表抽象数据结构，实现了约瑟夫环游戏的模拟进行过程，可以实现输入参与游戏的人数、每个人对应的密码以及初始的m值的功能。
//3.	详细设计
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

    printf("请输入参加游戏的人数n");
    scanf("%d",&n);
    list *L=init(n);
    printf("请输入每个人的密码");
    list *p=L;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p->code);

       printf("%d %d\t",p->number,p->code);
        p=p->next;
    }
    printf("请输入初始的m的值");
    scanf("%d",&m);
    p=L;
    for(i=1;i<n;i++)
    {
        p=p->next;  //让p指向L的前一个结点
    }


    while(j<=n)

    {
        for(i=1 ;i<m;i++)
        {
            p=p->next;
            //p指向要删除的结点前;
        }

        list *prev=p->next;
        m=prev->code;
        printf("%d\t",prev->number);
        p->next=prev->next;
        free(prev);
       j++;
    }
}
