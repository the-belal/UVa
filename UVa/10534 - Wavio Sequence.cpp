#include<bits/stdc++.h>
using namespace std;
typedef long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mmod 1000000007
#define pi acos(-1)
vector<ll>v,vv;
struct st {
    ll val,in;

};

ll lis(ll n)
{
    st a[20005],aa[20005];
    vector<ll>L,LL;
    L.push_back(-INFINITY);
    LL.push_back(-INFINITY);
    for (int i=0;i<n-1;i++)
    {
        L.push_back(INFINITY);
        LL.push_back(INFINITY);
    }
    L[1]=v[1];
    a[1].val=1;
    a[1].in=1;
    a[0].val=0;
    a[0].in=0;
    for (int i=2;i<n;i++)
    {
        ll l=lower_bound(L.begin(),L.end(),v[i])-L.begin();
        a[i].val=l;
        a[i].in=i;
        //cout<<l<<' ';
        //maxi=max(maxi,a[i]);
        L[l]=v[i];
    }

    LL[1]=vv[1];
    aa[1].val=1;
    aa[1].in=n-2;
    aa[0].val=0;
    aa[0].in=n-1;

    for (int i=2;i<n;i++)
    {
        ll l=lower_bound(LL.begin(),LL.end(),vv[i])-LL.begin();
        aa[i].val=l;
        aa[i].in=n-i-1;
        //cout<<l<<' ';
        //maxi=max(maxi,aa[i]);
        LL[l]=vv[i];
    }
ll maxi=1;
    for (int i=0,j=n;i<n;i++,j--)
    {
        //cout<<a[i].val<<' '<<aa[j].val<<endl;
        maxi=max(maxi,min(a[i].val,aa[j].val));
    }
    return maxi;

}
int main ()
{

    ll x,n;

    while(cin>>n)
    {
        v.push_back(0);
        vv.push_back(0);
        for (int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            //vv.push_back(x);
        }
        for (int i=n;i>0;i--)
        {

            vv.push_back(v[i]);
            //vv.push_back(x);
        }

//for (int i=0;i<v.size();i++)
//{
//    cout<<v[i]<<' ';
//}
//cout<<endl;
//for (int i=0;i<vv.size();i++)
//{
//    cout<<vv[i]<<' ';
//}
//cout<<endl;

    ll ans=lis(v.size());

    cout<<2*ans-1<<endl;

    v.clear();
    vv.clear();
    }
    return 0;
}
