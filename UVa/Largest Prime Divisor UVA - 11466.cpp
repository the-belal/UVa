
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
            n=abs(n);
        vector<ll>v;
        for (ll i=2; i*i<=n; i++)
        {
            if (n%i==0)
            {
                v.push_back(i);
                while (n%i==0)
                {
                    //cout<<"    "<<i<<endl;
                    n/=i;
                }
            }
        }
        if (n!=1)
            v.push_back(n);
        sort(v.begin(),v.end());
        if (v.size()>1)
            cout<<v[v.size()-1];
        else
            cout<<-1;
        cout<<endl;
    }


    return 0;
}
