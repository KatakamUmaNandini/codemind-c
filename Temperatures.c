#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],c,j,co=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        co=0;
        if(i==n-1)
        {
            printf("%d ",c);
            break;
        }
        for(j=i+1;j<n;j++)
        {
            c+=1;
            if(a[j]>a[i])
            {
                co+=1;
                break;
            }
        }
        if(co==0)
        {
            printf("%d ",co);
        }
        else{
            printf("%d ",c);
        }
    }
}