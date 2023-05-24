#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int a[n],g,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        g=prime(a[i]);
        if(g==1 && a[i]>=k)
        {
            c++;
        }
    }
    printf("%d",c);
}