#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    return c;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[10],c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i)==2)
            {
                a[c]=i;
                c+=1;
            }
        }
    }
    if(c<2)
    {
        printf("-1");
    }
    else
    {
        for(i=0;i<=1;i++)
        {
            printf("%d ",a[i]);
        }
    }
    
}