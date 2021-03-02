#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long yo[1000005],ar[1000005];
int main ()
{
    ll i,j,n,t,tc,a,b,cnt,r,N,count,ans;
    N=1;
    count=0;
    for (i=1;i<=1000000;i++)
    {
        cnt=0;

        n=i;
        if (N==i)
        {
            r=sqrt(n);
            ar[N]=1;
            count++;
        for (j=1;j<=r;j++)
        {
            if (n%j==0)
                {
                    cnt++;
            if (n/j!=j)
                cnt++;
                }
        }

        N+=cnt;


        }
        yo[i]=count;

    }
    scanf("%lld",&tc);
    for (t=1;t<=tc;t++)
    {
        scanf("%lld%lld",&a,&b);
        yo[0]=0;
        ans=yo[b]-yo[a-1];
        printf("Case %lld: %lld\n",t,ans);

    }
    return 0;
}

