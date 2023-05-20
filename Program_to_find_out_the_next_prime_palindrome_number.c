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
int palindrome(int h){
    int r=0,t;
    int g=h;
    while(h>0){
        t=h%10;
        r=(r*10)+t;
        h=h/10;
    }
    if(r==g){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,z;
    scanf("%d",&n);
    int i=n+1;
    while(i){
        int u=prime(i);
        int k=palindrome(i);
        if(u==1 && k==1){
            printf("%d",i);
            break;
        }
        i=i+1;
        
    }
}