#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,cz=0,co=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            cz++;
        }
        else{
            co++;
        }
    }
    if(2*cz==co)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}