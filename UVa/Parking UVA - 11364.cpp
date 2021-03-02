
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll sum=0;
        sort(a,a+n);
        for (int i=0; i<n-1; i++)
        {
            sum+=a[i+1]-a[i];
        }
        sum+=a[n-1]-a[0];
        cout<<sum<<endl;
    }

    return 0;
}
