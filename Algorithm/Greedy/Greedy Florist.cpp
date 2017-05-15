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
    ll n,f,x;

    cin>>n>>k;
    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n,greater<ll>());

    ll sum=0;
    f=1,x=0;
    for(i=0;i<n;i++)
    {
        sum+=((x+1)*a[i]);

        f++;
        if(f>k)
        {
            f=1;x++;
        }
    }

    cout<<sum<<endl;

    return 0;
}
