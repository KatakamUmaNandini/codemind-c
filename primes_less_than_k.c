#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
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
    int n,g,c=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        g=prime(a[i]);
        if(g==1 && a[i]<=k)
        {
            c++;
        }
    }
    printf("%d",c);
}