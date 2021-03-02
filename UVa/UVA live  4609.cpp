#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)
#define mx 10000005
ll pri[mx],a[mx];
ll sieve()
{
    ll i,j,r;
    r=sqrt(mx);
    for (i=4;i<=mx;i+=2)
    {
        a[i]=1;
    }
    for (i=3;i<=r;i++)
    {
        for (j=i;i*j<=mx;j++)
            a[i*j]=1;
    }
    j=0;
    for (i=2;i<=mx;i++)
    {
        if (a[i]==0)
            pri[j++]=i;
    }
}
int main ()
{
    //__FastIO;
    ll i,j,len,n,a,limit;
    string st;
    sieve();
    while (cin>>st)
    {
        map<ll,ll>mp;
        len=st.size();
        sort (st.begin(),st.end());
        reverse(st.begin(),st.end());
        //cout<<st<<endl;
        limit=0;
        for (i=0;i<len;i++)
        {
            int in;
            in=st[i]-'0';
            mp[in]=1;
            limit=limit*10+in;
        }
        //cout<<limit;
        int d,n,p,cnt=0;
        cnt=0;
        for (i=0;pri[i]<=limit;i++)
        {
          //  cout<<pri[i]<<" ";
            p=1;
            n=pri[i];
            while (n!=0)
            {
                d=n%10;
                n=n/10;
                if (mp[d]==0)
                {
                    p=0;
                    break;
                }

            }
            if (p==1)
                {
                    cnt++;
                    //printf("%lld ",pri[i]);
                }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
