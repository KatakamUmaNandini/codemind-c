#include<stdio.h>
int prime(int m)
{
    int i,c=0;
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i,c,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=prime(i);
            if(c!=2)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}