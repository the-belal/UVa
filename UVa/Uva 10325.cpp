#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,temp,mask,cnt,times,sum,a[20],n,bit,lcm;
    while (scanf("%lld%lld",&n,&bit)==2)
    {
        for (i=0;i<bit;i++)
            cin>>a[i];
        ll lim=1<<bit;
        sum=0;
        for (mask=1;mask<lim;mask++)
        {
            times=0;
            lcm=1;
            cnt=0;
            temp=mask;
            while (temp!=0)
            {
                if (temp%2!=0)
                {
                    lcm=(lcm*a[cnt])/(__gcd(lcm,a[cnt]));
                    times++;
                }
                cnt++;
                temp=temp/2;
            }
            if (times%2==0)
                sum-=n/lcm;
            else
                sum+=n/lcm;
        }
        cout<<n-sum<<endl;
    }
    return 0;
}
