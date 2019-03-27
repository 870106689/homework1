#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int number;
    int code;
    struct node *next;
}list,node;

list *init(int n)
{
    list *L = (node *)malloc(sizeof(node));
    L->next=L;
   int i;
   list *r=L;
   for(i=0;i<n;i++)
   {
       node *p;
        p=(node*)malloc(sizeof(node));
       p->number=i+1;
      r->next=p;
      r=p;
      r->next=L;
   }

    return L;
}
list *Delete(list *p,list *prev)
{
    list *q;
   prev->next=p->next;
   q=p;
   free(q);

}
list *print(list *p)
{
  printf("%d\t",p->number);

}
void main()
{
    int i,n,m,j=0;

    printf("请输入参加报数人的总数n\n");
    scanf("%d",&n);

    list *L=init(n);

    list *p=L;
    list *prev=NULL;

 printf("请输入依次每个人的密码\n");
    for(i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        p->code=x;
        p=p->next;
    }
    printf("请输入报数上限m的值");
    scanf("%d",&m);
    p=L;
    while(j<n)
    {
        for(i=0;i<m;i++)
        {
            prev=p;
            p=p->next;
        }
        m=p->code;
        print(p);
        Delete(p,prev);
       p=p->next;
       j++;

    }


}
