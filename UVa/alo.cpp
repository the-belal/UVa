#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    faster;
    ll tc;
    cin>>tc;
    for (int t=1; t<=tc; t++)
    {
        ll a[1005];
        ll b[1005];
        ll n;
        ll cnt=0;
        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        for (int i=1;i<=n;i++)
        {
            if (a[i]==i)
                {
                    continue;
                }
            else
            {
                cnt++;
                int j=b[i];
                int x=a[i];
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                b[x]=j;
                b[i]=i;
            }
        }

        cout<<"Case "<<t<<": ";
        cout<<cnt<<endl;
    }
    return 0;
}
