#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t,c=1,s=0,a,i;
    while(n!=0)
    {
        t=n%10;
        a=1;
        for(i=1;i<c;i++)
        {
            a=a*8;
        }
        c++;
        s=s+(t*a);
    
        n=n/10;
    }
    printf("%d",s);
}