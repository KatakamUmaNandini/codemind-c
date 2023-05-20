#include<stdio.h>
int prime(int t){
    int i,c=0;
    for(i=1;i<=t;i++)
    {
        if(t%i==0){
            c++;
        }
    }
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,i,r=0;
    scanf("%d",&n);
    int u=prime(n);
    while(n>0)
    {
        i=n%10;
        r=(r*10)+i;
        n=n/10;
    }
    int b=prime(r);
    if(u==1 && b==1){
        printf("circular prime");
    }
    else if(u==1 && b==0){
        printf("prime but not a circular prime");
    }
    else{
        printf("not prime");
    }
}