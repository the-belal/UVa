
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pi acos(-1)
int main()
{
    faster;
    ll tc,n;
    vector<ll>v;
    while (cin>>n)
    {
        if (n==0)
            break;
        v.push_back(n);
        while (cin>>n && n!=0)
        {
            v.push_back(n);
        }
        ll gcd=abs(v[1]-v[0]);
        for (int i=2;i<v.size();i++)
        {
            gcd=__gcd(gcd,abs(v[i]-v[i-1]));
        }
        v.clear();
        cout<<gcd<<endl;
    }
    return 0;

}
