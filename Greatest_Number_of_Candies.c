#include<stdio.h>
int main()
{
    int m,i;
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int max=a[0];
     for(i=0;i<m;i++)
    {
        if(a[i]>max)
        {
           max=a[i];   
        }
    }
     for(i=0;i<m;i++)
    {
        if(a[i]+k>=max)
        {
            printf("True ");
        }
        else{
            printf("False ");
        }
    }
}