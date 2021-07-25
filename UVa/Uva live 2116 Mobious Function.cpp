#include<bits/stdc++.h><
using namespace std;
#define mx 10005
typedef long long ll;
bool a[10005];
//vector<ll>prime;
ll sieve ()
{
    ll i,j,r;
    r=sqrt(mx);
    for (i=4;i<=mx;i+=2)
        a[i]=true;
    for (i=3;i<=r;i+=2)
    {
        if (a[i]==false)
        for (j=i;i*j<=mx;j+=1)
            a[i*j]=true;
    }
//    for (i=2;i<=mx;i++)
//    {
//        if (a[i]==false)
//            prime.push_back(i);
//    }

}
ll mob[mx];
ll mobious ()
{
    ll i,j,n,m;
    for (i=1;i<=mx;i++)
    {
        mob[i]=1;
    }
    for (i=2;i<=mx;i++)
    {
        if (a[i]==false)
        {
            mob[i]=-1;
            for (j=i+i;j<=mx;j+=i)
            {
                if (j%(i*i)==0)
                    mob[j]=0;
                else
                    mob[j]=-1*mob[j];
            }
        }
    }
}
int main ()
{
    ll n,i,j,k,m;
    sieve();
    mobious();
    int fl=0;
    while (1)
    {

        cin>>n;
        if (n==-1)
            break;
            if (fl!=0)
            cout<<endl;
        printf("M(%lld) = %lld\n",n,mob[n]);

        fl++;
    }
    return 0;
}

