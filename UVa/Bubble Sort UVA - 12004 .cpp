
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
    cin>>tc;
    for (int t=1;t<=tc;t++)
    {
        cin>>n;
        ll mul=(n*(n-1))/2;
        cout<<"Case "<<t<<": ";
        if (mul%2==0)
        cout<<mul/2<<endl;
        else
            cout<<mul<<'/'<<2<<endl;
    }


    return 0;
}
