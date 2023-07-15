#include<stdio.h>
int pr(int n)
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
    int n;
    scanf("%d",&n);
    int i,k,h,u;
    if(pr(n)==2)
    {
        printf("0");
    }
    else
    {
        for(i=n+1;;i++)
        {
            k=pr(i);
            if(k==2)
            {
                h=i;
                break;
            }
        }
        for(i=n-1;;i--)
        {
            k=pr(i);
            if(k==2)
            {
                u=i;
                break;
            }
        }
        if(h-n<n-u)
        {
            printf("%d",h-n);
        }
        else
        {
            printf("%d",n-u);
        }
    }
}