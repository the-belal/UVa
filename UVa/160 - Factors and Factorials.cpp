#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 105
ll pri[105],a[105];
ll sieve()
{
    ll i,j;
    for ( i=4 ; i<=mx ;i+=2)
    {
        a[i]=1;
    }
    ll r=sqrt(mx);
    for (i=2;i<=r;i++)
    {
        for ( j=i;i*j<=mx;j++)
        {
            a[i*j]=1;
        }
    }
    j=0;
    for (i=2;i<=mx;i++)
    {
        if (a[i]==0)
            {
                pri[j]=i;
                j++;
            }
    }

}
ll d[105],maxi;
ll fun (ll n)
{

    memset(d,0,sizeof(d));
    ll i,cnt,j,k,p,m;
    maxi=0;
    for (i=2;i<=n;i++)
    {
        m=i;
        j=0;
        while (m!=0)
        {
            if (m==1)
                break;

                while (m%pri[j]==0 && m!=0)
                { if (pri[j]==0)
                break;
                    m=m/pri[j];
                    d[pri[j]]++;

                }

            j++;
            maxi=max(maxi,j-1);
        }
    }


}
int main ()
{
    ll ans,n,m,i,p;
    sieve();
    while (scanf("%lld",&n)==1)
    {
        if (n==0)
            break;
            printf("%3lld! =",n);
           fun(n);
            for (i=0;i<=maxi;i++)
            {

                if (i==15)
                    printf("\n%9lld",d[pri[i]]);
                else
                    printf("%3lld",d[pri[i]]);
            }
            printf("\n");
    }
return 0;
}
