#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll dp[103][105],n,m;
string st[105],s[105];
ll LCS (ll i, ll j)
{
    if (i==n || j==m)
        return 0;
    if (dp[i][j]!=-1)
        return dp[i][j];
    ll ret1=0,ret2=0,ret3=0;
    if (st[i]==s[j])
        ret3=1+LCS(i+1,j+1);
    else
    {
        ret1=LCS(i+1,j);
        ret2=LCS(i,j+1);
    }
    dp[i][j]=max(ret1,max(ret2,ret3));
    return dp[i][j];


}
ll ch;
ll print(ll i, ll j)
{
    if (i==n || j==m)
        return 0;
    if (st[i]==s[j])
    {
        if (ch!=0)
        {
            cout<<' ';
        }
        cout<<st[i];
        ch=1;
        print(i+1,j+1);
    }
    else if (dp[i+1][j]>dp[i][j+1])
    {
        print(i+1,j);
    }
    else
    {
        print(i,j+1);
    }
    return 0;
}
int main ()
{
    faster;
    //ll tc;

    //double d;
    int i=0,j=0;
    while (cin>>st[i])
    {
        ch=0;
    i++;
    while (cin>>st[i])
    {

        if (st[i]=="#")
            break;
            i++;

    }
    n=i;

    while (cin>>s[j])
    {
        if (s[j]=="#")
            break;
        j++;

    }
    m=j;
        memset(dp,-1,sizeof(dp));
        ll ans=LCS(0,0);
        ll x= print(0,0);
        cout<<endl;
        i=0;
        j=0;
    }

    return 0;
}
