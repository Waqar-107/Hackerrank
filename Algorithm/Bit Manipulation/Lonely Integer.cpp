/*****from dust i have come, dust i will be*****/

/*by operating xor on two same numbers we get 0, so the number that appears
twice will be zero and that appeared once will stay*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    int n;

    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    j=a[0];

    for(i=1;i<n;i++)
        j=j^a[i];

    cout<<j;

    return 0;
}
