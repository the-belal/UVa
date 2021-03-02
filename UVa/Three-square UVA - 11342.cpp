
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
bool chk[50005];
vector<int>v[50005];
int main ()
{
    faster;
    ll n,m;
    ll tc;
    cin>>tc;
    for (int i=0; i*i<=50002; i++)
    {
        for (int j=0; (i*i+j*j)<=50002; j++)
        {
            for (int k=0; (i*i+j*j+k*k)<=50002; k++)
            {
                int x=i*i+j*j+k*k;
                if (chk[x]==false)
                {
                    v[x].push_back(i);
                    v[x].push_back(j);
                    v[x].push_back(k);
                }
                chk[x]=true;
            }
        }
    }
    while (tc--)
    {
        cin>>n;
        if (chk[n]==false)
            cout<<-1<<endl;
        else
            cout<<v[n][0]<<' '<<v[n][1]<<' '<<v[n][2]<<endl;
    }
    return 0;
}
