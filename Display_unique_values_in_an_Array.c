#include<stdio.h>
int count(int n,int k,int *a)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i,c,co=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=count(n,a[i],a);
        if(c==1)
        {
            co++;
            printf("%d ",a[i]);
        }
        
    }
    if(co==0)
        {
            printf("-1");
        }
}