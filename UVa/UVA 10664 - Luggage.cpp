#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll dp[1003][1005];
string st,s;
ll LCS (ll i, ll j)
{
    if (i==st.size() || j==s.size())
        return 0;
    if (dp[i][j]!=-1)
        return dp[i][j];
    ll ret1=0,ret2=0,ret3=0;
    if (st[i]==s[j])
        ret3=1+LCS(i+1,j+1);
    else
    {
        ret1=LCS(i+1,j);
        ret2=LCS(i,j+1);
    }
    dp[i][j]=max(ret1,max(ret2,ret3));
    return dp[i][j];


}
int main ()
{
    faster;
    //ll tc;

    //double d;

    while (getline(cin,st))
    {
        getline(cin,s);
        memset(dp,-1,sizeof(dp));
        ll ans=LCS(0,0);
        cout<<ans<<endl;

    }

    return 0;
}
