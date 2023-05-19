#include<stdio.h>
int prime(int a){
    int i,count=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&prime(i)==0){
            c++;
        }
    }
    printf("%d",c);
}