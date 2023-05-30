#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=n/2;
    for(i=n-1;i>=c;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",a[i]);
    }
}