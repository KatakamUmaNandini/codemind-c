#include<stdio.h>
int main()
{
    int n,s=0,es=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0){
            s=s+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0){
            es=es+a[i];
        }
    }
    int y;
    if(s>es){
        y=s-es;
    }
    else{
        y=es-s;
    }
    printf("%d",y);
}