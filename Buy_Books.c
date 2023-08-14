#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n],sa=0,sb=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sa=sa+a[i];
    }
    for(i=0;i<n;i++)
    {
        sb=sb+b[i];
    }
    if(sa>sb)
    {
        printf("0");
    }
    else
    {
        printf("%d",sb-sa);
    }
}