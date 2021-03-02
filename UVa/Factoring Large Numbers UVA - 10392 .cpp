
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
        if (n<0)
            break;
        for (ll i=2;i*i<=n;i++)
        {
            if (n%i==0)
            {
                while (n%i==0)
                {
                    cout<<"    "<<i<<endl;
                    n/=i;
                }
            }
        }
        if (n!=1)
            cout<<"    "<<n<<endl;
        cout<<endl;
    }


    return 0;
}
