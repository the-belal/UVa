#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll a[105][105],temp[105],n;
ll kadane()
{
    ll maxi=INT_MIN,sum=0;
    ll ch=0;
    for (int i=0;i<n;i++)
    {
        sum+=temp[i];
        if (sum<0)
        {
            sum=0;
        }
        else
        {
            ch=1;
            maxi=max(maxi,sum);
        }
    }
    if (ch==1)
        return maxi;
    maxi=temp[0];
    for (int i=1;i<n;i++)
    maxi=max(maxi,temp[i]);

    return maxi;
}

ll fun ()
{
    ll maxi=INT_MIN,sum;
    for (int i=0;i<n;i++)
    {
        memset(temp,0,sizeof(temp));
        for (int j=i;j<n;j++)
        {
            for (int k=0;k<n;k++)
                {
                    temp[k]+=a[k][j];
                }
                sum=kadane();
                maxi=max(maxi,sum);


        }
    }
    return maxi;
}
int main ()
{
    faster;
    ll tc;
    while (cin>>n)
    {
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        ll ans=fun();
        cout<<ans<<endl;
    }
    return 0;
}
