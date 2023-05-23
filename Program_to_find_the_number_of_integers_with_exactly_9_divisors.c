#include<stdio.h>
int prime(int m)
{
    int i,c=0;
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int c,i,count=0;
    for(i=1;i<=n;i++)
    {
        c=prime(i);
        if(c==9){
            printf("%d ",i);
            count++;
        }
    }
    printf("
Total=%d",count);
    
}