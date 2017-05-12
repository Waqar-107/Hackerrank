/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    int l,r,m;

    m=0;
    cin>>l>>r;

    for(i=l;i<=r;i++)
    {
        for(j=l;j<=r;j++)
        {
            k=i^j;
            if(k>m)
                m=k;
        }
    }

    cout<<m;

    return 0;
}
