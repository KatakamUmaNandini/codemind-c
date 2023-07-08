#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i=1,j,k;
    scanf("%d",&n);
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
    }
    if(n-j<k-n)
    {
        printf("%d",j);
    }
    else if(n-j>k-n)
    {
        printf("%d",k);
    }
    else{
        printf("%d ",j);
        printf("%d",k);
    }
}