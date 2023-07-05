#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,mc=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c++;
            if(i==n-1)
            {
                if(c>mc)
                {
                    mc=c;
                }
            }
        }
        if(a[i]==0)
        {
            if(c>mc)
            {
                mc=c;
            }
            c=0;
        }
    }
    printf("%d",mc);
}