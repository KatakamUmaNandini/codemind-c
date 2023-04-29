#include<stdio.h>
int main(){
int n,s,t,r=0,q,rev=0,a;
scanf("%d",&n);
s=n*n;
while(n!=0)
{
    t=n%10;
    r=(r*10)+t;
    n=n/10;
}
q=r*r;
while(q!=0)
{
    a=q%10;
    rev=(rev*10)+a;
    q=q/10;
}
if(rev==s)
{
    printf("True");
}
else{
    printf("False");
}
}