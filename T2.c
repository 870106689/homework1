#include<stdio.h>
#include<stdlib.h>
int fun(int n,int a[],int x);
void main()
{
    int n,i,x,p0;

    printf("���������ʽ��������");
    scanf("%d",&n);
   int  *a=(int*)malloc(sizeof(int)*(n+1));
    printf("�������������ʽ������");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("������x��ֵ");
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
