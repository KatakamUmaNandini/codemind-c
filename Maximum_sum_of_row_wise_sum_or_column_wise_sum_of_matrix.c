#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j,a[n][m],c=0,b[m+n],s;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
        b[c]=s;
        c+=1;
    }
    for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+a[i][j];
        }
        b[c]=s;
        c+=1;
    }
    int max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    printf("%d",max);
}