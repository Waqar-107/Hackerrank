/*from dust i have come,dust i will be*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    int n,m;
    int a,b;
    int s,t,d;

    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    int ap=0,orr=0;
    for(i=0;i<m;i++)
    {
        cin>>d;
        d+=a;

        if(d>=s && d<=t)
            ap++;
    }

    for(i=0;i<n;i++)
    {
        cin>>d;
        d+=b;

        if(d>=s && d<=t)
            orr++;
    }

    cout<<ap<<endl<<orr;

    return 0;

}
