#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n;i>=0;i--){
        if(a[i]%2!=0){
            printf("%d",a[i]);
            break;
        }
    }
}