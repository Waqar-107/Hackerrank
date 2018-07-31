/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1000100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);

    stack<pp> element, maxi;
    pp x,y;

    for(i=1;i<=n;i++)
    {
        sf(m);

        if(m==1)
        {
            sf(k);
            element.push({k,i});

            if(maxi.empty())
                maxi.push({k,i});

            else
            {
                x=maxi.top();
                if(x.first<k)
                    maxi.push({k,i});
            }
        }

        else if(m==2)
        {
            x=maxi.top();
            y=element.top(); element.pop();

            if(x.first==y.first && x.second==y.second)
                maxi.pop();
        }

        else
            pf(maxi.top().first);
    }

    return 0;
}
