#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,m,ans;
    scanf("%lld",&n);

        ll sum=1;
        m=1;
        for (i=1;;i++)
        {
            if (n==0)
            {
                printf("1\n");
                break;
            }

            m*=10;
            sum+=m;
            sum=sum%n;
            if (sum%n==0)
            {
                printf("%lld\n",i+1);
                break;
            }
        }
    return 0;
}
