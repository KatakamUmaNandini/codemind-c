#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    i=1;
    while(i<=n)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        i+=1;
    }
}