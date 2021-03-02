#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,k,ans,temp,med,a[100005],p;
    j=0;
    while (scanf("%lld",&a[j])==1)
    {
        j++;
    }
    med=0;
    printf("%lld\n",a[0]);
    for (i=1;i<j;i++)
    {
        if (a[i-1]>a[i])
        {
            k=i;
            while (k!=0 && a[k-1]>a[k])
            {
            temp=a[k];
            a[k]=a[k-1];
            a[k-1]=temp;
            k--;
            }
        }

        if (i%2==0)
        {
            med=i/2;
            printf("%lld\n",a[med]);
        }
        else

        {
            ans=(a[med]+a[med+1])/2;
            printf("%lld\n",ans);
        }

    }
    return 0;
}
