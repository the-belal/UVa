#include<bits/stdc++.h>
using namespace std;
typedef long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll dp[103][50005];
ll a[103],n,sum;

ll fun(int i, ll w)
{
    if (i==n)
        return 0;
    if (dp[i][w]!=-1)
        return dp[i][w];
        ll ret1=0,ret2=0;

        if (w+a[i]<=sum/2)
        {
            ret1=a[i]+fun(i+1,w+a[i]);
        }
        ret2=fun(i+1,w);
        dp[i][w]=max(ret1,ret2);
        return dp[i][w];

}

int main ()
{
    faster;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        memset(dp,-1,sizeof(dp));
         sum=0;
        for (int i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }
            ll ans=fun(0,0);
            cout<<(sum-2*ans)<<endl;



    }

    return 0;
}
