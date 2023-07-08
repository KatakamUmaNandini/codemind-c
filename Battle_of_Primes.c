#include<stdio.h>
int np(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
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
    int n1,n2,i,k;
    scanf("%d
%d",&n1,&n2);
    for(i=n1+n2+1;;i++)
    {
        k=np(i);
        if(k==1)
        {
            printf("%d",i-(n1+n2));
            break;
        }
    }
}