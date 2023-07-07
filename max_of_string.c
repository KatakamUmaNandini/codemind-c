#include<stdio.h>
int main()
{
    char su[100];
    scanf("%[^
]s",su);
    char max=su[0];
    int i;
    for(i=0;su[i]!=NULL;i++)
    {
        if(su[i]>max)
        {
            max=su[i];
        }
    }
    printf("%c",max);   
        
}