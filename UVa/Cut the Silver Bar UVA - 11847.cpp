
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)

int main()
{
    ll tc;
    ll n,q;
    while (cin>>n)
    {
        if (n==0)
            break;
        int cnt;
        for (int i=0;;i++)
        {
            ll x=1LL<<i;
            if (x<=n)
                cnt=i;
            else
                break;
        }
        cout<<cnt<<endl;
    }


    return 0;
}
