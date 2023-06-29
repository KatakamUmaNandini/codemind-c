#include<stdio.h>
int prime(int k)
{
    int c=0,i;
    for(i=1;i<=k;i++)
    {
        if(k%i==0)
        {
            c++;
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
int pal(int e)
{
    int m=e,t,r=0;
    while(e!=0)
    {
        t=e%10;
        r=(r*10)+t;
        e=e/10;
    }
    if(r==m)
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
    int n,i,a,b;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        a=prime(i);
        b=pal(i);
        if(a==1&&b==1)
        {
            printf("%d",i);
            break;
        }
    }
}