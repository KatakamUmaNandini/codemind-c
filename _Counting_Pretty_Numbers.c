#include<stdio.h>
int pretty(int k)
{
    int t=k%10;
    int c=0;
    if(t==2||t==3||t==9)
    {
        c=c+1;
    }
    return c;
}
int main()
{
    int n,i,a,b,j,d,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            d=pretty(j);
            if(d>=1)
            {
                count++;
            }
        }
        printf("%d
",count);
        count=0;
    }
}