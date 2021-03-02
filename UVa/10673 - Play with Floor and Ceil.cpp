#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll tc,x,k,ans;
    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld%lld",&x,&k);
        ans=x%k;
        printf("%lld %lld\n",k-ans,ans);
    }
    return 0;
}
