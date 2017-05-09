/*from dust i have come,dust i will be*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    int n,m;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        if(m<38)
            cout<<m<<endl;

        else
        {
            if((m+2)%10==0)
                cout<<(m+2)<<endl;

            else if((m+2)%5==0)
                cout<<(m+2)<<endl;

            else if((m+1)%10==0)
                cout<<(m+1)<<endl;

            else if((m+1)%5==0)
                cout<<(m+1)<<endl;

            else
                cout<<m<<endl;
        }
    }

    return 0;

}
