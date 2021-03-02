#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,mini,maxi,n,x,y,cnt,sum,m;
    while (scanf("%lld",&n)==1)
    {
        if (n==0)
            break;
        map<ll,ll>mp;
        map<ll,ll> :: iterator it;
        sum=0;
        for (i=0;i<n;i++)
        {
            scanf("%lld",&x);
            for (j=0;j<x;j++)
            {
                scanf("%lld",&y);
                mp[y]++;
            }
            it=mp.begin();
            x=(*it).first;
            mp[x]--;
            it=mp.end();
            it--;
            y=(*it).first;
            mp[y]--;
            sum+=y-x;
            if (mp[x]==0)
                mp.erase(x);
            if (mp[y]==0)
                mp.erase(y);
        }
        printf("%lld\n",sum);
    }
return 0;
}
