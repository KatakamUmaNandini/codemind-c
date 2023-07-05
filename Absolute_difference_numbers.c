#include<stdio.h>
int main()
{
    int n,k,t,v=0;
    scanf("%d %d",&n,&k);
    int i,u=n;
    for(i=0;i<k;i++)
    {
        t=n%10;
        v=(v*10)+t;
        n=n/10;
    }
    int r=0,m;
    while(v!=0)
    {
        m=v%10;
        r=(r*10)+m;
        v=v/10;
    }
    int rev=0,e;
    while(u!=0)
    {
        e=u%10;
        rev=(rev*10)+e;
        u=u/10;
    }
    int y,h=0;
    for(i=0;i<k;i++)
    {
        y=rev%10;
        h=(h*10)+y;
        rev=rev/10;
    }
    int d;
    if(r>h)
    {
        d=r-h;
    }
    else{
        d=h-r;
    }
    printf("%d",d);
}