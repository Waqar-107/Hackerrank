#include<stdio.h>
#include<string.h>

#define dbg printf("in\n");

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    char s[1001];

    scanf("%[^\n]c",s);

    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==' ')
            printf("\n");
        else
            printf("%c",s[i]);
    }

    return 0;
}

