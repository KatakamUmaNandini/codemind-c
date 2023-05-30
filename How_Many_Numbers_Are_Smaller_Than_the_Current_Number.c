#include<stdio.h>
int count(int n,int k,int *a)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=count(n,a[i],a);
        printf("%d ",c);
    }
}