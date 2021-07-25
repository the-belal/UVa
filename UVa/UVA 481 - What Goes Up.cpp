#include<bits/stdc++.h>
using namespace std;
typedef long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mmod 1000000007
#define pi acos(-1)
vector<ll>v;
ll a[100005];
ll lis(ll n)
{
    vector<ll>L;
    L.push_back(-INFINITY);
    for (int i=0;i<n;i++)
    {
        L.push_back(INFINITY);
    }
    L[1]=v[1];
    a[1]=1;
    ll maxi=1;
    for (int i=2;i<n;i++)
    {
        ll l=lower_bound(L.begin(),L.end(),v[i])-L.begin();
        a[i]=l;
        //cout<<l<<' ';
        maxi=max(maxi,a[i]);
        L[l]=v[i];
    }

return maxi;
}
ll print(ll n, ll len)
{
 vector<ll>ans;
ll prev=INFINITY;
for (int i=n-1;i>=0;i--)
{
    if (a[i]==len && prev>a[i])
    {
        ans.push_back(v[i]);
        prev=v[i];
        len--;
    }
}
reverse(ans.begin(),ans.end());
for (int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
return 0;

}
int main ()
{

    ll x;
    v.push_back(0);
    while(cin>>x)
    {
        v.push_back(x);
    }
    ll ans=lis(v.size());
    cout<<ans<<endl;

    cout<<'-'<<endl;
    ll box=print(v.size(),ans);
    v.clear();
    return 0;
}
