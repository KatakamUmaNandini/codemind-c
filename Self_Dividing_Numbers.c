#include<stdio.h>
int fun(int n)
{
    int c=0,t,u=n,c1=0;
    while(n!=0)
    {
        t=n%10;
        if(t==0)
        {
            return 0;
        }
        if(u%t==0)
        {
            c++;
        }
        c1++;
        n=n/10;
    }
    if(c==c1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int a,b,i,k;
    scanf("%d
%d",&a,&b);
    for(i=a;i<=b;i++)
    {
       k=fun(i);
       if(k==1)
       {
           printf("%d ",i);
       }
    }
}