#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c,i=1;
    while(i<=n)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        i+=1;
    }
}