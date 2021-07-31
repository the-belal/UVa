#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
string a,b;
int dp[105][105];
int LCS (int i, int j)
{
    if (i==a.size() || j==b.size()) return 0;
    if (dp[i][j]!=-1) return dp[i][j];
    int ret1=0,ret2=0;
    if (a[i]==b[j])
    {
        ret1=1+LCS(i+1,j+1);
    }
    ret1=max(ret1,LCS(i+1,j));
    ret1=max(ret1,LCS(i,j+1));
    return dp[i][j]=ret1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //    cout<<setprecision(10);
    //    cout<<fixed;
    int t=1;
    while (1)
    {

        getline(cin,a);
        if (a[0]=='#') break;
        getline (cin, b);
        memset(dp,-1,sizeof(dp));
        ll ans=LCS(0,0);

        cout<<"Case #"<<t++<<": you can visit at most " << ans <<" cities."<<endl;
    }



    return 0;
}
