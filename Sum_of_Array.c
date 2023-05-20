#include<stdio.h>
int main()
{
    int n,es=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        es=es+a[i];
    }
    printf("%d",es);
}