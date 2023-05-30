#include<stdio.h>
int main()
{
    int n,i,f,p=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=p*a[i];
    }
    for(i=0;i<n;i++)
    {
        f=p/a[i];
        printf("%d ",f);
    }
    
}