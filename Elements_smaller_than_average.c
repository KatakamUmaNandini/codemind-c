#include<stdio.h>
int main()
{
    int n,i,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    int u=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=u){
            c++;
        }
    }
    printf("%d",c);
}