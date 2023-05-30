#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,i;
    char str[100];
    scanf("%s",str);
    int len =strlen(str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[0]==0)
        {
            c++;
        }
    }
    if(c==0 && len==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}