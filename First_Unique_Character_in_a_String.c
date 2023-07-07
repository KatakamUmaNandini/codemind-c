#include<stdio.h>
int main()
{
    int i,j,c=0,k=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c=0;
        for(j=0;s[j]!=NULL;j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d",i);
            k++;
            break;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}