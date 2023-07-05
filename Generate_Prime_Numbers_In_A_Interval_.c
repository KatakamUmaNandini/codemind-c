#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int a,b,i,k;
    scanf("%d
%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        k=prime(i);
        if(k==2)
        {
            printf("%d
",i);
        }
    }
}