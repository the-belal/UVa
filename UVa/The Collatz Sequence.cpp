#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll n, ll m)
{
    if (n==1)
        return 1;
    if (n>m)
        return 0;

    if (n%2==0)
        return 1+fun(n/2,m);
    return 1+fun(3*n+1,m);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll m,n,x,y;
    ll tc=1;
    while (cin>>n>>m)
    {
        if (n<0 && m<0)
        {
            break;
        }
        cout<<"Case "<<tc<<": A = "<<n<<", limit = "<<m<<", number of terms = ";
        ll ans=fun(n,m);
        cout<<ans<<endl;
        tc++;
    }

    return 0;
}
