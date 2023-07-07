#include<stdio.h>
int main()
{
    int n,t,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=(r*10)+(n%10);
        n=n/10;
    }
    while(r!=0)
    {
        t=r%10;
        if(t%2!=0)
        {
            printf("%d",t*t);
        }
        r=r/10;
    }
}