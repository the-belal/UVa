#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power (ll n, ll p)
{
    ll i,j,mul=1;
    for (i=1; i<=p; i++)
    {
        mul*=n;
    }
    return mul;
}
int main ()
{
    ll i,j,n,p,k,m,mult,len;
    ll two,three,five,seven;
    vector < ll > v;
    for (i=0; (two=power(2,i))<=2000000000; i++)
    {
        for (j=0; (three=power(3,j))<=2000000000; j++)
        {
            if (two*three<=2000000000)
                for (k=0; (five=power(5,k))<=2000000000; k++)
                {

                    if (two*five*three<=2000000000)
                        for (m=0; (seven=power(7,m))<=2000000000; m++)
                        {

                            if (seven *two*five*three<=2000000000)
                                mult=seven *two*five*three;
                            else
                                break;

                            if (mult<=2000000000)
                            {
                                v.push_back(mult);
                            }
                            else
                            {
                                break;
                            }
                        }
                    else break;
                }
            else break;
        }
    }
    sort (v.begin(),v.end());
    len=v.size();
    while (scanf("%lld",&n)==1)
    {
        if (n==0)
            break;
        printf("The ");
        if (n%100==11 || n%1000==11)
            printf("%lldth ",n);
        else if (n%100==12 || n%1000==12)
            printf("%lldth ",n);
        else if (n%100==13 || n%1000==13)
            printf("%lldth ",n);
        else if (n%10==1)
            printf("%lldst ",n);
        else if (n%10==2)
            printf("%lldnd ",n);
        else if (n%10==3)
            printf("%lldrd ",n);
        else
            printf("%lldth ",n);
        printf("humble number is %lld.\n",v[n-1]);
    }
    return 0;
}

