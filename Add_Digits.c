#include<stdio.h>
int add(int n)
{
    int s=0,t;
    while(n!=0)
    {
        t=n%10;
        s=s+t;
        n=n/10;
    }
    return s;
}
int count(int n)
{
    int c=0,t;
    while(n!=0)
    {
        t=n%10;
        c++;
        n=n/10;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,k,c;
    for(i=1;;i++)
    {
        n=add(n);
        c=count(n);
        if(c==1)
        {
            printf("%d",n);
            break;
        }
    }
}