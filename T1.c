#include<stdio.h>
void main()
{
    int a[3],i,j,t;
    printf("please input three numbers");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<3;i++)
        printf("%d\n",a[i]);


}
