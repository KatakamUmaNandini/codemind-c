#include<stdio.h>
int rev(int n)
{
    int r=0;
    while(n!=0)
    {
        r=(r*10)+(n%10);
        n=n/10;
    }
    return r;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    if(n>0)
    {
        k=rev(n);
        printf("%d",k);
    }
    else
    {
        k=rev(-1*n);
        printf("-%d",k);
    }
}