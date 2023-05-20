#include<stdio.h>
int main()
{
    int n,i,c=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(a[i]==k){
            c++;
        }
    }
    printf("%d",c);
}