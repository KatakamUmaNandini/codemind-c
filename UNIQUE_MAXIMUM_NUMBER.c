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
    int b[n],j,k=0,c;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            b[k]=a[i];
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        int max=b[0];
        for(i=0;i<k;i++)
        {
            if(b[i]>max)
            {
                max=b[i];
            }
        }
        printf("%d",max);
    }
}