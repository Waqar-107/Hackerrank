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
    int i,j,k;
    int n;

    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    ll min=inf;
    for(i=1;i<n;i++)
    {
        if(abs(a[i]-a[i-1])<min)
            min=abs(a[i]-a[i-1]);
    }

    cout<<min;

    return 0;
}
