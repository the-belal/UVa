#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define endl '\n'
ll tr;
ll dp[100][100][100];
ll fun(int val, int incr, int cnt)
{
    if (val>tr) return 5000000;
    if (val==tr)
    {
        if (incr==1) return cnt;
        return 500000;
    }
    if (dp[val][incr][cnt]!=-1) return dp[val][incr][cnt];

    ll mn=500000;
    mn=min(mn,fun(val+incr,incr,cnt+1));
    mn=min(mn,fun(val+incr+1,incr+1,cnt+1));
    if (incr>1)
    mn=min(mn,fun(val+incr-1,incr-1,cnt+1));

    return dp[val][incr][cnt]=mn;
}
ll bini(ll dif)
{
    ll low=0,high=dif,ans,md;
    while (low<=high)
    {
        md=(low+high)/2;
        ll val=(md*(md+1))/2+(md*(md-1))/2;
        if (val<=dif)
        {
            ans=2*md-1;
            //cout<<dif-val<<endl;
            if (val<dif) ans++;
            if (dif-val>md) ans++;
            //cout<<md<<endl;
            low=md+1;
        }
        else high=md-1;
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //    cout<<setprecision(10);
    //    cout<<fixed;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        //memset(dp,-1,sizeof(dp));
        ll l,r;
        cin>>l>>r;
        ll dif=r-l;
        tr=r;
        if (dif<=3)
        {
            cout<<dif<<endl;
            continue;
        }
        ll ans=bini(dif);
        cout<<ans<<endl;
        //ans=fun(l+1,1,1);
        //cout<<ans<<endl;
    }

    return 0;
}
