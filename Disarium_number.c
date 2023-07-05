#include<stdio.h>
int main()
{
    int n,t,a,s=0;
    scanf("%d",&n);
    int u=n,k,c=0,i;
    while(n!=0)
    {
        t=n%10;
        c++;
        n=n/10;
    }
    int p=u;
    while(u!=0)
    {
        k=u%10;
        a=k;
        for(i=1;i<c;i++)
        {
            a=a*k;
        }
        s=s+a;
        u=u/10;
        c--;
    }
    if(s==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}