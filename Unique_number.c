#include<stdio.h>
int main()
{
    int a[100];
    int n,i,j,flag=1,t,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        a[c]=t;
        c++;
        n=n/10;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(a[i]==a[j])
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}