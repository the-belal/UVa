#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
string a,b;
int dp[1005][1005];
int LCS (int i, int j)
{
    if (i==a.size() || j==b.size()) return dp[i][j]=0;
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
void path(int i, int j)
{
    if (i==a.size() || j==b.size())
    {
        return ;
    }
    if (a[i]==b[j])
    {
        cout<<a[i];
        path(i+1,j+1);
        return ;
    }

    if (i+1<a.size() && j<b.size() && dp[i+1][j]>=dp[i][j+1] && a[i+1]<=b[j])
    {
        path(i+1,j);
    }
    else path(i,j+1);

    return ;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //    cout<<setprecision(10);
    //    cout<<fixed;
    while (getline(cin,a),getline(cin,b))
    {

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        memset(dp,-1,sizeof(dp));
        ll ans=LCS(0,0);
        path(0,0);
        cout<<endl;
    }



    return 0;
}
