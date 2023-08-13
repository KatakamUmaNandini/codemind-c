#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,k,c=0;
    scanf("%d",&n);
    int a[10];
    for(i=1;i<=n;i++)
    {
        if(c==2)
        {
            break;
        }
        k=prime(i);
        if(n%i==0 && k==1)
        {
            a[c]=i;
            c+=1;
        }
    }
    if(c<2)
    {
        printf("-1");
    }
    else
    {
        for(i=0;i<c;i++)
        {
            printf("%d ",a[i]);
        }
    }
}