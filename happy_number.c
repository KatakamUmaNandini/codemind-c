#include<stdio.h>
int add(int n)
{
    int s=0,t;
    while(n!=0)
    {
        t=n%10;
        s=s+(t*t);
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
        s++;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,c,i;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        n=add(n);
        c=count(n);
        if(c==1)
        {
            if(n==1||n==7)
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
            break;
        }
    }
}