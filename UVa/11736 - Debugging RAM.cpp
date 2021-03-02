#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll power (ll n, ll p)
{
    ll i,ans=1;
    for (i=1;i<=p;i++)
        ans*=n;
    return ans;
}
int main ()
{
    ll ans,sum,mul,i,j,k,n,tc,qu,b,v,x,kbar,p,len,nl;
    ll po,m;
    string st[10000],s,pr[10000];
    while (scanf("%llu%llu",&b,&v)==2)
    {
        string name[10000];
        map<string,ll>mp;
        map<string,ll>newm;
        kbar=0;
        for (i=0; i<v; i++)
        {
            getchar();
            cin>>name[i];
            scanf("%llu",&x);
            mp[name[i]]=x;
            newm[name[i]]=1;
            kbar+=x;
        }
        for (i=0; i<kbar; i++)
        {
            getchar();
            cin>>st[i];
        }
        scanf("%llu",&qu);
        getchar();
        for (i=0; i<qu; i++)
            cin>>pr[i];
            j=0;
            p=0;
        for (i=0; i<v; i++)
        {
            x=mp[name[i]];
            s=st[j];
            j++;
            while (j<(p+x))
            {
                s=s+st[j];
                j++;
            }
            p=j;
            len=s.size();
            sum=0;
            po=len-1;
            for (m=0;m<len;m++)
                {
                    if (s[m]!='0')
                       sum+=power(2,po);

                        po--;
                }
                mp[name[i]]=sum;
                //cout<<s<<endl;
        }
        for (i=0;i<qu;i++)
        {
            if (newm[pr[i]]==0)
                cout<<pr[i]<<"="<<endl;
            else
            cout<<pr[i]<<"="<<mp[pr[i]]<<endl;

        }


    }
    return 0;
}

