/*****from dust i have come, dust i will be*****/

/**longest common subsequence**/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    int i,j,k;
    int m,n;

    cin>>m>>n;
    int a[m],b[n];

    for(i=0;i<m;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        cin>>b[i];

    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }

            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    i=m,j=n;
    vector<int> c;

    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1])
        {
            c.push_back(a[i-1]);
            i--;j--;
        }

        else
        {
            if(dp[i-1][j]>dp[i][j-1])
                i--;
            else
                j--;
        }
    }

    reverse(c.begin(),c.end());
    //cout<<dp[m][n]<<endl;
    for(i=0;i<c.size();i++)
        cout<<c[i]<<" ";


    return 0;
}
