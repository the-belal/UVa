
#include<bits/stdc++.h>
using namespace std;
typedef long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll dp[8][8000];
ll a[]={1,5,10,25,50},n;
ll fun (int i, ll am)
{
    if (i>=5)
    {
        if (am==0)
            return 1;
        else
    return 0;
    }
    if (dp[i][am]!=-1)
        return dp[i][am];
        ll ret1=0,ret2=0;
    if (am-a[i]>=0)
    {
        ret1=fun(i,am-a[i]);
    }
    ret2=fun(i+1,am);

        return dp[i][am]=ret1+ret2;

}
int main ()
{
    faster;
    ll tc;
    memset(dp,-1,sizeof(dp));
    while (cin>>n)
    {
        ll ans=fun(0,n);
        cout<<ans<<endl;
    }

    return 0;
}
