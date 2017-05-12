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
    int i,j,k;
    int t;
    
    cin>>t;

    ll x,y;
    
    x=pow(2,32);
    while(t)
    {
        cin>>y;
        cout<<(x-y-1)<<endl;
        t--;
    }

    return 0;
}
