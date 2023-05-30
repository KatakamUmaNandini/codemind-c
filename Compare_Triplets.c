#include<stdio.h>
int main()
{
    int i,j,ca=0,cb=0;
    int a[3],b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           if(a[i]>b[j]&&i==j)
           {
               ca++;
           }
           if(b[j]>a[i]&&i==j)
           {
               cb++;
           }
       }
    }
    printf("%d %d",ca,cb);
}