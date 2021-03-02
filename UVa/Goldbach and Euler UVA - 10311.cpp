#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
bool chk[100000006];
void sieve()
{
    int n=100000002;
    chk[1]=true;
    int r=sqrt(n);
    for (int i=4; i<=n; i+=2)
        chk[i]=true;
    for (int i=3; i<=r; i+=2)
    {
        if (chk[i]==false)
            for (int j=i; i*j<=n; j+=2)
            {
                chk[i*j]=true;
            }
    }
    //cout<<prime.size()<<endl;
    return ;
}
int main ()
{
    faster;
    int tc,n,k,l,r;
    //string st;
    sieve();
    while (cin>>n)
    {
        if (n%2==1)
        {
            if (n>2 && chk[n-2]==false)
            {
                cout<<n<<" is the sum of "<<2<<" and "<<n-2<<'.'<<endl;
            }
            else
                cout<<n<<" is not the sum of two primes!"<<endl;
        }
        else
        {

            bool p=false;
            for (int i=n/2-1; i>=1; i--)
            {
                if (chk[i]==false && chk[n-i]==false)
                {
                    cout<<n<<" is the sum of "<<i<<" and "<<n-i<<'.'<<endl;
                    p=true;
                    break;
                }
            }
            if (p==false)
                cout<<n<<" is not the sum of two primes!"<<endl;
        }
    }
    return 0;
}
