
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
int main ()
{
    faster;
    ll n,m;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        n++;
        n/=2;
        unsigned long long ans=(n*n)+(n-1)*(n-1);
        cout<<ans<<endl;

    }
    return 0;
}
