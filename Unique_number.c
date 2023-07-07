#include<stdio.h>
int main()
{
    int n,t,c=0,i,j,flag=1;
    scanf("%d",&n);
    int a[100];
    while(n!=0)
    {
        t=n%10;
        a[c]=t;
        c++;
        n=n/10;
    }
    // for(i=0;i<c;i++)
    // {
    //     printf("%d ",a[i]);
    // }
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
    if(flag==0)
    {
        printf("Not Unique Number");
    }
}