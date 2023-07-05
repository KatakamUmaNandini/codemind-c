#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c,i=1;
    int j,k;
    while(i<=n)
    {
        if(n>a&&n<b)
        {
            j=a;
            k=b;
            break;
        }
        c=a+b;
        a=b;
        b=c;
        i+=1;
    }
    if(n-j<k-n)
    {
        printf("%d",j);
    }
    else if(n-j>k-n)
    {
        printf("%d",k);
    }
    else
    {
        printf("%d ",j);
        printf("%d",k);
    }
}