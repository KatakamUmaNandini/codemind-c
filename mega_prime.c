#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,t,i,c,co=0,count=0,k;
    scanf("%d",&n);
    c=prime(n);
    if(c!=2)
    {
        printf("Not Mega Prime");
    }
    else
    {
        while(n!=0)
        {
            t=n%10;
            k=prime(t);
            if(k==2)
            {
                co++;
            }
            count++;
            n=n/10;
        }
        if(co==count)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
}