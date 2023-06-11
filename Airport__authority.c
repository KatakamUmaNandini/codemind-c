#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d
",&a[i]);
    }
    int t,s=0;
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            s=s+1;
        }
        else{
            s=s+2;
        }
    }
    printf("%d",s);
}