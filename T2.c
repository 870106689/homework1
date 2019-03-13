#include<stdio.h>
#include<stdlib.h>
int fun(int n,int a[],int x);
void main()
{
    int n,i,x,p0;

    printf("请输入多项式的最大阶数");
    scanf("%d",&n);
   int  *a=(int*)malloc(sizeof(int)*(n+1));
    printf("请依次输入多项式的序数");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("请输入x的值");
    scanf("%d",&x);
    p0=fun(n,a,x);
    printf("%d",p0);
    free(a);

}
int fun(int n,int a[],int x)
{
    int i;
int p=a[n];
    for(i=n;i>0;i--)
    {
        p=x*p+a[i-1];
    }
    return p;
}
