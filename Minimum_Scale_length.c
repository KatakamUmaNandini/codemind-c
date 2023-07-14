#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],j;
    int b[50],c=0,count;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(i=1;i<=min;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                count+=1;
            }
        }
        if(count==n)
        {
            b[c]=i;
            c+=1;
        }
    }
    int max=b[0];
    for(i=0;i<c;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    printf("%d",max);
}