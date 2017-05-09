/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll u,v,m,t,s,n;

    scanf("%lld",&t);
    while(t)
    {
        scanf("%lld%lld",&n,&m);

        ll dist[n+1],vis[n+1];
        vector<ll> adj[n+1];

        memset(dist,-1,sizeof(dist));
        memset(vis,0,sizeof(vis));

        for(i=0; i<m; i++)
        {
            scanf("%lld%lld",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        scanf("%lld",&s);

        dist[s]=0;
        queue<ll> q;
        q.push(s);

        ll item;
        while(!q.empty())
        {
            ll u=q.front();
            q.pop();

            if(vis[u])
                continue;

            vis[u]=1;
            for(i=0; i<adj[u].size(); i++)
            {
                item=adj[u][i];
                if(dist[u]+1<dist[item] || dist[item]<0)
                {
                    dist[item]=dist[u]+6;
                    q.push(item);
                }
            }
        }

        for(i=1; i<=n; i++)
        {
            if(i!=s)
            {
                printf("%lld ",dist[i]);
            }
        }
        printf("\n");

        t--;
    }

    return 0;
}
