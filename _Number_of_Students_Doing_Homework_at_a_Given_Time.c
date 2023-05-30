#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,m;
    scanf("%d",&m);
    int b[m];
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j && k>=a[i]&&k<=b[j])
            {
                c++;
            }
        }
    }
    printf("%d",c);
}