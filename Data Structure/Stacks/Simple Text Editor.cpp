/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1000100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

struct query{
    int type;
    string str;

    query(){}

    query(int type,string str)
    {
        this->type=type;
        this->str=str;
    }
};

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    string s="",t;
    stack<query> stk;

    sf(n);
    while(n--)
    {
        sf(m);

        if(m==1)
        {
            cin>>t;
            stk.push(query(m,t));
            s+=t;
        }

        else if(m==2)
        {
            sf(k); t=""; i=s.length()-1;
            while(k--)
            {
                t.push_back(s[i]);
                i--;
                s.pop_back();
            }

            reverse(t.begin(),t.end());
            stk.push(query(2,t));
        }

        else if(m==3)
        {
            sf(k); k--;
            cout<<s[k]<<endl;
        }

        else
        {
            query q=stk.top();
            stk.pop();

            if(q.type==1)
            {
                k=q.str.length();
                while(k--)
                    s.pop_back();
            }

            else
                s+=q.str;
        }
    }


    return 0;
}
