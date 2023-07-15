#include<stdio.h>
int np(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    return c;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    int n,j,k,h,p;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=n;;j++)
        {
            k=np(j);
            if(k==2)
            {
                p=j;
                break;
            }
        }
        if(n==2||n==1)
        {
            printf("%d
",p);
        }
        else
        {
            for(j=n-1;;j--)
            {
                k=np(j);
                if(k==2)
                {
                    h=j;
                    break;
                }
                
            }
            if(n-h<p-n)
            {
                printf("%d
",h);
            }
            else if(n-h>p-n)
            {
                printf("%d
",p);
            }
            else
            {
                printf("%d
",h);
            }
        }
    }
}