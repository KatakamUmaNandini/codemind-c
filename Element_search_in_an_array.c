#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
     for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
        }
    }
    if(c!=0){
        printf("True");
    }
    else{
        printf("False");
    }
}