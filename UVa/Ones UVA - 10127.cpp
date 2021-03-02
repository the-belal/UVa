
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)

int main()
{
    faster;
    ll tc;
    ll i,j,len,n,m;
    int t=1;
    while (cin>>n)
    {
        int cnt=1;
        int x=1;
        while(x%n!=0)
        {
                x=x*10+1;
                if (x>=n)
                {
                    x=x%n;
                }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
