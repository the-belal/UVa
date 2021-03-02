#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
int vis[21][2][11][2];
ll dp[21][2][11][2];
string a;
ll ways(int posi, bool choto, int prev, bool chk)
{
    if (posi==a.size())
    {
        if (chk==true)
        {
            //cout<<sum<<endl;
            return 1;
        }
        return 0;
    }
    if (vis[posi][choto][prev][chk]!=-1)
        return dp[posi][choto][prev][chk];
    int low=0,high=9;
    if (choto==0)
        high=a[posi]-'0';

    ll ret=0;
    for (int i=low; i<=high; i++)
    {
        bool temp=chk;
        if ((prev==1 && i==3) || i==4)
            temp=false;
        ret+=ways(posi+1,(i<high||choto), i, temp);
    }
    vis[posi][choto][prev][chk]=1;
    return dp[posi][choto][prev][chk]=ret;
}
int main ()
{
    faster;
    ll tc,n;

        while (cin>>n)
        {

            ll low=1,high=18446744073709551615,md,ans=0,y;
            while (low<=high)
            {
                a.clear();
                md=low+((high-low)/2);
                ll x=md;
                while (x>0)
                {
                    ll r=x%10;
                    x/=10;
                    a.push_back(r+'0');
                }
                reverse(a.begin(),a.end());
               // cout<<a;
                memset(vis,-1,sizeof(vis));
                ans=ways(0,0,0,1)-1;
                //cout<<' '<<ans<<endl;

                if (ans>=n)
                {
                    y=md;
                    high=md-1;
                }
                else if (ans<n)
                    low=md+1;
            }

            cout<<y<<endl;
        }
    return 0;
}
