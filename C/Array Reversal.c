#include <stdio.h>

#define dbg printf("in\n");
int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);

    return 0;
}

