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
    int s=0,t;
    while(n!=0)
    {
        t=n%10;
        s+=1;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,c,i;
    scanf("%d",&n);
    for(i=0;;i++)
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