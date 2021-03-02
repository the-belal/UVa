
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define pi acos(-1)
int main()
{
    faster;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        ll sum=(n*(n+1))/2;
        if (sum%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    //main();
    return 0;
}
