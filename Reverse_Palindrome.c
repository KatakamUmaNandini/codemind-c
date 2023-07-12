#include<stdio.h>
int rev(int n)
{
    int r=0;
    while(n!=0)
    {
        r=(r*10)+(n%10);
        n=n/10;
    }
    return r;
}
int pal(int n)
{
    int m=n,r=0;
    while(n!=0)
    {
        r=(r*10)+(n%10);
        n=n/10;
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
    int n,i;
    scanf("%d",&n);
    for(i=0;;i++)
    {
        n=n+rev(n);
        if(pal(n)==1)
        {
            printf("%d",n);
            break;
        }
    }
}