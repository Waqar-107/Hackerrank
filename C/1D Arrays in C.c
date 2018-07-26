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

    int sum=0;
    for(i=0;i<n;i++)
        sum+=a[i];

    printf("%d",sum);

    return 0;
}

