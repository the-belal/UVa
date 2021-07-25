#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
ll ncr(ll n, ll m)
{
        ll mul=1;
        //ll x=n,y=m;
        m=min(n-m,m);
        for (int i=1;i<=m;i++)
        {
            if (n%i==0)
            {
                mul*=n/i;
            }
            else if (mul%i==0)
            {
                mul=(mul/i)*n;
            }
            else
                mul=(mul*n)/i;
            n--;
        }

    return mul;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cout<<setprecision(2);
//    cout<<fixed;
    ll n,m;
    while (cin>>n>>m)
    {
        if (n==m && n==0) break;

        ll ans=ncr(n,m);
        cout<<ans<<endl;

    }


    return 0;
}


