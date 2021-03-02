#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main ()
{
    ll i,j,m2,m3,m5,a[1505],mul;
    a[0]=1;
    m2=0;
    m3=0;
    m5=0;
    for (i=1;i<=1501;i++)
    {
        a[i]=min (a[m2]*2,min(a[m3]*3,a[m5]*5));
        if (a[i]%2==0)
            m2++;
        if (a[i]%3==0)
            m3++;
        if (a[i]%5==0)
            m5++;

    }
    printf("The 1500'th ugly number is %lld.\n",a[1499]);
    return 0;
}
