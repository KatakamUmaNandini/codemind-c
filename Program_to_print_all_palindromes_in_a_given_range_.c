#include<stdio.h>
int pal(int n)
{
    int m=n,r=0,t;
    while(n!=0)
    {
        t=n%10;
        r=(r*10)+t;
        n=n/10;
    }
    if(r==m)
    {
        printf("%d ",r);
    }
}
int main()
{
    int a,b,i,d;
    scanf("%d
%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        d=pal(i);
    }
}