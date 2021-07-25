#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll dp[14][105],a[14][105],n,m;
ll fun (ll i, ll j)
{
    if (i<1)
        i=n;
    if (i==(n+1))
        i=1;
    if (j==m)
        return dp[i][j]=a[i][j];
    if (dp[i][j]!=-1)
        return dp[i][j];
    ll ret1=12e13,ret2=12e13,ret3=12e13;
    ret1=a[i][j]+fun(i,j+1);
    ret2=a[i][j]+fun(i-1,j+1);
    ret3=a[i][j]+fun(i+1,j+1);
    dp[i][j]=min(ret1,min(ret2,ret3));
    return dp[i][j];

}
ll ch;
ll print(ll i, ll j)
{

    if (i==0)
        i=n;
    if (i==n+1)
        i=1;
    if (ch!=0)
        cout<<' ';
    ch=1;
    cout<<i; //<<' '<<a[i][j]<<endl;
    if (j>=m)
    {
        return 12e13;
    }

    ll ret1=12e13,ret2=12e13,ret3=12e13;
    if ((i-1)>=1 && j+1<=m)
        ret1=a[i][j]+dp[i-1][j+1];
    else
        ret1=a[i][j]+dp[n][j+1];
    if (j+1<=m)
        ret2=a[i][j]+dp[i][j+1];
    if ((i+1)<=n && (j+1)<=m )
        ret3=a[i][j]+dp[i+1][j+1];
    else
        ret3=a[i][j]+dp[1][j+1];

    ll mini=min(ret1,min(ret2,ret3));
    //cout<<ret1<<" "<<ret2<<' '<<ret3<<endl;
    if (ret3==mini && ((i+1)>n && (j+1)<=m ))
    {
        ll xx=print(1,j+1);
    }
    else if (ret1==mini)
    {
        if ((i-1)>=1 && j+1<=m)
            ll xx=print(i-1,j+1);
        else if (ret2==mini)
        {
            ll xx= print(i,j+1);
        }
        else if ( ret3==mini && (i+1)<=n && (j+1)<=m )
            ll xx=print(i+1,j+1);
        else
            ll xx=print(n,j+1);
    }
    else if (ret2==mini)
    {
        ll xx= print(i,j+1);
    }
    else if (ret3==mini)
    {
        if ((i+1)<=n && (j+1)<=m )
            ll xx=print(i+1,j+1);
        else
            ll xx=print(1,j+1);

    }
    return 0;


}
int main ()
{
    faster;
    ll tc;
    while (cin>>n>>m)
    {
        memset(dp,-1,sizeof(dp));
        ch=0;
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=m; j++)
            {
                cin>>a[i][j];
            }
        }
        ll ans=12e13;
        ll p=0;
        for (int i=1; i<=n; i++)
        {
            ll x=fun(i,1);
            if (x<ans)
            {
                ans=x;
                p=i;
            }
        }
        //cout<<dp[1][5]<<endl;
        ll habi= print(p,1);
        cout<<endl;
        cout<<ans<<endl;

    }
    return 0;
}
