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
    ll n,w,q;

    cin>>q;

    while(q)
    {
        cin>>n>>k;
        ll a[n],b[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n;i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+n,greater<ll>());

        j=1;
        for(i=0;i<n;i++)
        {
            if(a[i]+b[i]>=k)
                continue;

            else
            {
                j=0;break;
            }
        }

        if(j)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        q--;
    }

    return 0;
}
