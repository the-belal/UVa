
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
bool chk[1000006];
ll a[1000006];
vector<int>prime;
bool check(int n)
{
    ll m=n;
    string st;
    while (n>0)
    {
        ll r=n%10;
        st.push_back(r+'0');
        n/=10;
    }
    reverse(st.begin(),st.end());
    for (int i=0;i<st.size();i++)
    {
        int sum=0;
        for (int j=i+1;;j++)
        {

            //cout<<7<<endl;
            if (j==st.size())
                j=0;
                sum=sum*10+st[j]-'0';
            if (j==i)
                break;

        }
        //sum=sum*10+st[i]-'0';

        if (chk[sum]==true)
            return false;
    }
    //cout<<st<<endl;
    return true;
}
void sieve()
{
    ll n=1000002;
    chk[1]=true;
    ll r=sqrt(n);
    for (int i=4;i<=n;i+=2)
        chk[i]=true;
    for (int i=3;i<=r;i+=2)
    {
        for (int j=i;i*j<=n;j+=2)
        {
            chk[i*j]=true;
        }
    }

    for (int i=3;i<=n;i+=2)
    {
        if (chk[i]==false)
        {
            bool p=check(i);
            if (p)
            {
                prime.push_back(i);
            }
        }
    }
    //cout<<prime.size()<<endl;
    return ;
}
int main ()
{
    faster;
    ll tc,n,k,l,r;
    //string st;
    sieve();
    //cout<<chk[179]<<endl;
    ll cnt=0;
    int j=0;
        for (int i=0;i<=1000002;i++)
        {
            if (j>=prime.size())
                a[i]=cnt;
            else if (  i==prime[j])
            {
                j++;
                cnt++;
            }
            a[i]=cnt;
        }
    while (cin>>l)
    {
        if (l==-1)
            break;
        cin>>r;
        ll ans;
        if (l==0)
            ans=a[r];
        else
            ans=a[r]-a[l-1];
            //cout<<a[0]<<' '<<a[r]<<endl;
        if (ans==0)
            cout<<"No Circular Primes."<<endl;
        else if (ans==1)
            cout<<"1 Circular Prime."<<endl;
        else
            cout<<ans<<" Circular Primes."<<endl;



        //cout<<a[r]-a[l-1]<<endl;

    }
    return 0;
}
