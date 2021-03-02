#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,tc,l,u,ans,r,cnt,mx;
    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld%lld",&l,&u);
        mx=-1;
        for (i=l; i<=u; i++)
        {
            n=i;
            r=sqrt(n);
            cnt=0;
            for (j=1;j<=r;j++)
            {
                if (i%j==0)

                {
                    cnt++;
                    if (j!=i/j)
                        cnt++;
                }
            }
            if (cnt>mx)
            {
                mx=cnt;
                ans=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,ans,mx);
    }
    return 0;
}

