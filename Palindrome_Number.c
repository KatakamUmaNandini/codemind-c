#include<stdio.h>
int pal(int n)
{
    int m=n,r=0,t;
    while(n!=0)
    {
        t=n%10;
        r=(r*10)+t;
        n=n/10;
    }
    if(r==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,t,i,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n<0)
        {
            printf("False
");
        }
        else
        {
            k=pal(n);
            if(k==1)
            {
                printf("True
");
            }
            else
            {
                printf("False
");
            }
        }
    }
}