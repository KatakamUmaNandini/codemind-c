#include<stdio.h>
int count(int n)
{
    int c=0,t;
    while(n>0)
    {
        t=n%10;
        c++;
        n=n/10;
    }
    return c;
}
int main()
{
    int n,i,c,co=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       c=count(a[i]);
       if(c%2==0)
       {
           co++;
       }
    }
    printf("%d",co);
}