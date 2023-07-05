#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int u=n,i,t,r=0;
    for(i=1;i<=k;i++)
    {
        t=n%10;
        r=(r*10)+t;
        n=n/10;
    }
    int rev=0;
    while(r!=0)
    {
        rev=(rev*10)+(r%10);
        r=r/10;
    }
    int ur=0;
    while(u!=0)
    {
        ur=(ur*10)+(u%10);
        u=u/10;
    }
    int a=0;
    for(i=0;i<k;i++)
    {
        a=(a*10)+(ur%10);
        ur=ur/10;
    }
    int d;
    if(rev>a)
    {
        d=rev-a;
    }
    else
    {
        d=a-rev;
    }
    printf("%d",d);
}