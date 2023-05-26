#include<stdio.h>
int main()
{
    int n,t,m,r=0,rev=0;
    scanf("%d",&n);
    int u=n;
    int s=n*n;
    while(n>0){
        t=n%10;
        r=(r*10)+t;
        n=n/10;
    }
    int p=r*r;
    while(p>0)
    {
        m=p%10;
        rev=(rev*10)+m;
        p=p/10;
    }
    if(rev==s)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}