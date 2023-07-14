#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],c=0,b[n],count=0,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<c;j++)
        {
            if(a[i]==b[j])
            {
                count+=1;
            }
        }
        if(count==0)
        {
            b[c]=a[i];
            c+=1;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",b[i]);
    }
}