 #include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int *base;
    int *top;
    int size;

}stack;
stack *initstack()
{
    stack *s;
    s->base=(int *)malloc(100*sizeof(int));
    s->top=s->base;
    s->size=100;
    return s;
}
void push(stack *s,int e)
{
    *s->top=e;
    s->top++;
}
int pop(stack *s)
{
    int i;
   s->top--;
   i=*s->top;
   return i;
}
void print(stack *s)
{
    int *temp;
    temp=s->top;
    while(temp!=s->base)
    {
        temp--;
        printf("%d\t",*temp);
    }
    printf("\n");
}

void car_remake(stack *s,int output[],int pos,int i,int n)
{

    if(pos<n)
    {
        push(s,pos+1);
        car_remake(s,output,pos+1,i,n);
          pop(s);

    }
    if(!(s->top==s->base))
       {
           int m;
           m=pop(s);
           output[i]=m;
           i++;
            car_remake(s,output,pos,i,n);
            push(s,m);
             print(s);
       }

}
void main()
{
    stack *s;
    s=initstack();
    int n=4;
    int output[100];
    int pos=1;
    push(s,1);
    int i=0;
    car_remake(s,output,pos,i,n);


}
