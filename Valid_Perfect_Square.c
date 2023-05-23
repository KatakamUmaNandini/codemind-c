#include<stdio.h>
#include<math.h>
int fun(int a)
{
    int c=0,i;
   for(i=1;i<=a;i++)
   {
       if(a==i*i)
       {
           c++;
       }
   }
    if(c!=0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,i,a,h;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        h=fun(a);
        if(h==1){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}