// Verdict : Time Limit
#include<bits/stdc++.h>
using namespace std;
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)
typedef long long ll;
ll x,y,d,i;
ll check(ll b, ll a)
{
    ll j,ans,sum,di,low,high,eq,p,md;
    p=0;
    for (i=0;;i++)
    {
     eq  = (d-b*i);
     if (eq%a==0)
     {
         ans=eq/a;
         p=1;
     }
     if (p==1)
        break;

    }
    return ans;
}
int main ()
{
    __FastIO;
    ll sum,ans,a,b;
    while (cin>>a>>b)
    {
        if (a==0 && b!=0)
            cout<<"0 1";
        else if (a!=0 && b==0)
           cout<<"1 0";
           else if (a==0 && b==0)
            cout<<"0 0";
            else
        {
            d=__gcd(a,b);
        ans=check(max(a,b),min(a,b));

            if (b>a)
        cout<<ans<<" "<<i;
        else
            cout<<i<<" "<<ans;

        }
        cout<<" "<<d<<endl;
    }
    return 0;

}
