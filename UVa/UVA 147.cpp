
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll dp[13][300005];
ll a[]={5,10,20,50,100,200,500,1000,2000,5000,10000},n;
ll fun (int i, ll am)
{
    if (i>=11)
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
    //faster;
    ll tc;
    memset(dp,-1,sizeof(dp));
    double d;
    while (scanf("%lf",&d)==1)
    {
        if (d==0.00)
        break;

        n=d*100+0.5;
       ll ans=fun(0,n);
        //cout<<ans<<endl;
        printf("%6.2lf",d);
        printf("%17lld\n",ans);

        //cout<<ans<<endl;
    }

    return 0;
}
