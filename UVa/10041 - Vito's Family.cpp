#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mmod 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        int a[10004];
        int n;
        cin>>n;
        int mx,mn;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (i==0)
            {
                mx=a[0];
                mn=a[0];
            }
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }

        sort(a,a+n);
        ll sum=0;
        ll ans=1e16;
        for (int j=mn; j<=mx; j++)
        {
            sum=0;
            for (int i=0; i<n; i++)
            {
                sum+=abs(a[i]-j);
            }
            ans=min(ans,sum);
        }
        cout<<ans<<'\n';

    }
    return 0;

}
