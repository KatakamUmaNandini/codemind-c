#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[n],c,k=n/2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
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
        if(c>k)
        {
            printf("%d",a[i]);
            break;
        }
    }
}