#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,i=1,c,co=0;
    while(i<=n)
    {
        if(a==n)
        {
            co++;
        }
        c=a+b;
        a=b;
        b=c;
        i+=1;
    }
    if(co>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}