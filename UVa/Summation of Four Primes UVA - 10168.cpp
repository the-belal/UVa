
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
bool chk[10000009];
vector<int>prime;
void sieve()
{
    int n=10000008;
    int r=sqrt(n);
    for (int i=4; i<=n; i+=2)
    {
        chk[i]=true;

    }
    for (int i=3; i<=r; i+=2)
    {
        for (int j=i; i*j<=n; j+=2)
        {
            chk[i*j]=true;
        }
    }
    prime.push_back(2);
    for (int i=3; i<=n; i+=2)
        if (chk[i]==false)
            prime.push_back(i);
    return ;
}
int main ()
{
    faster;
    ll tc,n;
    sieve();
    //cout<<prime.size()<<endl;
    while (cin>>n)
    {
        bool p=false;
        if (n<8)
            cout<<"Impossible."<<endl;
        for (int i=0; i< prime.size() && prime[i]<=n; i++)
        {
            for (int j=0; j< prime.size() && prime[j]+prime[i]<=n; j++)
            {
                for (int k=0; k< prime.size() && prime[j]+prime[i]+prime[k]<=n; k++)
                {
                    ll x=n-prime[i]-prime[j]-prime[k];
                    if(x>1 && chk[x]==false)
                    {

                        cout<<prime[i]<<' '<<prime[j]<<' '<<prime[k]<<' '<<x<<endl;
                        p=true;
                        break;
                    }
                    if (x<=1)
                        break;

                }
                if (p)
                    break;

            }
            if (p)
                break;

        }


    }
    return 0;
}
