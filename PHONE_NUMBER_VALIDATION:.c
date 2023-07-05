#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int c=0,i;
    for(i=0;str[i]!=0;i++)
    {
        c++;
    }
    if(str[0]!=0&&c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}