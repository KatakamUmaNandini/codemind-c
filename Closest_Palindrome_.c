#include<stdio.h>
int np(int n)
{
    int j=n,r=0;
    while(n!=0)
    {
        r=(r*10)+(n%10);
        n=n/10;
    }
    if(j==r)
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
    int n,c1,c2,k,y,i;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        c1=np(i);
        if(c1==1)
        {
            k=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        c2=np(i);
        if(c2==1)
        {
            y=i;
            break;
        }
    }
    if(n-y<k-n)
    {
        printf("%d",y);
    }
    else if(n-y>k-n)
    {
        printf("%d",k);
    }
    else
    {
        printf("%d ",y);
        printf("%d",k);
    }
}