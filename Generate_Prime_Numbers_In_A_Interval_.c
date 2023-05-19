#include<stdio.h>
int prime(int e){
    int i,count=0;
    for(i=1;i<=e;i++)
    {
        if(e%i==0){
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
    int a,b,c=0,i;
    scanf("%d
%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(prime(i)==1){
            printf("%d
",i);
        }
    }
    
}