#include <stdio.h>

#define max(a,b) (a>b?a:b)
int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n;
    int a,b,c;
    int x,y,z;

    scanf("%d%d",&n,&k);

    x=y=z=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            a = i & j;
            b = i | j;
            c = i ^ j;

            if(a>x && a<k)
                x=a;

            if(b>y && b<k)
                y=b;

            if(c>z && c<k)
                z=c;
        }
    }

    printf("%d\n%d\n%d",x,y,z);

    return 0;
}

