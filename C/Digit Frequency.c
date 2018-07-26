#include<stdio.h>
#include<string.h>

#define dbg printf("in\n");

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    char s[1001];

    int a[10];
    memset(a,0,sizeof(a));

    scanf("%[^\n]c",s);

    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i]<='9')
            a[s[i]-'0']++;
    }

    for(i=0;i<=9;i++)
        printf("%d ",a[i]);

    return 0;
}

