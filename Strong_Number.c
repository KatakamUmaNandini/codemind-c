#include<stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int t,p;
    scanf("%d",&t);
    for(p=0;p<t;p++)
    {
        int n,i,k,f,s=0;
        scanf("%d",&n);
        int u=n;
        while(n!=0)
        {
            k=n%10;
            f=fact(k);
            s=s+f;
            n=n/10;
        }
        if(s==u)
        {
            printf("Strong
");
        }
        else
        {
            printf("Not Strong
");
        }
    }
}
