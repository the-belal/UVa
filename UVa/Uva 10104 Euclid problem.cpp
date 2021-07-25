#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y;
ll check(ll n, ll m)
{
    ll i,j,q=0,r0=n,r1=m,x0=1,x1=0,y0=0,y1=1,r;
    while (1)
    {
        q=r0/r1;
        r=r0%r1;
        if (r==0)
            break;
        r0=r1;
        r1=r;
        x=x0-x1*q;
        y=y0-y1*q;
        x0=x1;
        y0=y1;
        x1=x;
        y1=y;
    }
    return r1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,tc,len,j,cnt,k,n,t,m;
    while (cin>>n>>m)
    {
        x=0;
        y=1;
        ll ans=check(n,m);
        cout<<x<<' '<<y<<' '<<ans<<endl;
    }
    return 0;
}
