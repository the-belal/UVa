
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
bool fun(ll n)
{
    ll sum=1;
    for (int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            sum+=i;
            if (n/i!=i)
                sum+=n/i;
        }
    }
    if (n==sum)
        return true;
    return false;
}
int main ()
{
    faster;
    ll tc,n,k;
    //string st;
    //cin>>tc;
    // 11,23,29
    while (cin>>n)
    {
        if (n==0)
            break;
         ll m=(long long ) (1LL<<(2*n-1))-(1LL<<(n-1));
        bool chk=true;
        for (int i=2;i<n;i++)
        {
            if (n%i==0)
                chk=false;
        }
        if (chk==false)
            cout<<"Given number is NOT prime! NO perfect number is available."<<endl;

        else
        {
            if (n==11 || n== 23 || n==29)
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;
            else
            cout<<"Perfect: "<<m<<'!'<<endl;
        }

    }
    return 0;
}
