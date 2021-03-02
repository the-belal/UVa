#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)

int main()
{
    faster;
    ll n,a,b,k;
    while (cin>>n>>a>>b>>k)
    {
        ll aa[n+5];
        for (int i=0;i<n;i++)
        {
            cin>>aa[i];
            aa[i]%=(a+b);
            if (aa[i]==0)
                aa[i]=a+b;


        }
        sort(aa,aa+n);
        int cnt=0;
        for (int i=0;i<n;i++)
        {
            //cout<<aa[i]<<' ';
            if (aa[i]<=a)
            {
                cnt++;
            }
            else {

                int x=(aa[i])/a;
                if (aa[i]%a)
                    x++;
                int ct=x-1;

                if ((k-ct)>=0)
                    {
                        cnt++;
                        k-=ct;
                    }

            }
        }
        cout<<cnt<<endl;


    }
    return 0;
}

