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
    int n;
    scanf("%d",&n);
    int u=n,t,s=0;
    while(n!=0)
    {
        t=n%10;
        s=s+(fact(t));
        n=n/10;
    }
    if(s==u)
    {
        printf("The number %d is a strong number",u);
    }
    else
    {
        printf("The number %d is not a strong number",u);
    }
}