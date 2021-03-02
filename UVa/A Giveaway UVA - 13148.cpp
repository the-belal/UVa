
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
    while (cin>> n && n>0)
    {
        ll a[]={
            1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
            1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
            47045881, 64000000, 85766121
        };
        bool chk=false;
        for (int i=0; i<21; i++)
            {
                if (a[i]==n)
                {
                    chk=true;
                    break;
                }
            }
            if (chk)
                cout<<"Special"<<endl;
            else
                cout<<"Ordinary"<<endl;


    }
    return 0;
}
