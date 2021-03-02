#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,ans,s,peak,dife,i,j,a[100000],l,h,p=1;
    while (scanf("%lld",&n)==1)
    {
        p++;
        for (i=1;;i++)
        {
            peak=(i*(i+1))/2;
            if (peak>=n)
            {
                break;
            }

        }
        s=i;
        if (s%2==0)
        {
            l=s;
            h=1;
            l-=(peak-n);
            h+=(peak-n);
            printf("TERM %lld IS %lld/%lld\n",n,l,h);
        }
        else
        {
            l=1;
            h=s;
            l+=(peak-n);
            h-=(peak-n);
            printf("TERM %lld IS %lld/%lld\n",n,l,h);
        }
    }
    return 0;
}
