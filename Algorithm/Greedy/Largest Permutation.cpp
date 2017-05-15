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
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m;

    cin>>n>>k;
    int a[n];

    map<ll,ll> mp;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }

    ll h=n;j=0;
    while(k && h && j<n)
    {
        i=mp[h];

        if(i==j)
        {
            j++;h--;
            continue;
        }

        mp[a[j]]=i;
        mp[h]=j;

        swap(a[i],a[j]);

        h--;k--;j++;
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
