#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    long int s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%ld",s);
}