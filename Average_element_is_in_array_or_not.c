#include<stdio.h>
int main()
{
    int n,c=0,s=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    k=s/n;
     for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
        }
    }
    if(c!=0){
        printf("True");
    }
    else{
        printf("False");
    }
}