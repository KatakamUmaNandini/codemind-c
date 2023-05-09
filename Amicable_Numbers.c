#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,s=0,sum=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0){
            s=s+i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0){
            sum=sum+i;
        }
    }
    if(s==b&&sum==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}

