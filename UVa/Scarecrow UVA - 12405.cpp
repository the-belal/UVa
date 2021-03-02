
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
        string st;
        cin>>st;
        int cnt=0;
        for (int i=0;i<n;i++)
        {
            if (st[i]=='.')
            {
                cnt++;
                i+=2;
            }
        }
        cout<<"Case "<<t<<": ";
        cout<<cnt<<endl;
    }


    return 0;
}
