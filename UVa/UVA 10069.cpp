#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
string st,s;
ll len1,len2;
string dp[10004][103];
ll ck[10004][103];
string add (string a, string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string ans;
    if (a.size()>b.size())
    {
        while (a.size()>b.size())
        {
            b+="0";
        }
    }
    else if (a.size()<b.size())
    {
        while (a.size()<b.size())
        {
            a+="0";
        }
    }
    ll x,y,carry=0,sum=0;
    for (int i=0;i<b.size();i++)
    {
        x=a[i]-'0';
        y=b[i]-'0';
        sum=x+y+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum+'0');
    }
    if (carry!=0)
        ans.push_back(carry+'0');
    reverse(ans.begin(),ans.end());
    //cout<<a<<' '<<b<<endl;
    return  ans;
}
string lcs (ll i, ll j)
{
    //cout<<"aschi"<<endl;
    string ans="0";
    if (j==len2)
        return "1";
    if (i==len1)
        return "0";

        if (ck[i][j]!=-1)
        return dp[i][j];

    if (st[i]==s[j])
        ans=add(ans,lcs(i+1,j+1));
    ans=add(ans,lcs(i+1,j));
    ck[i][j]=1;
    return dp[i][j]=ans;

}
int main ()
{
    faster;
    ll tc,n,l,r,m;
    cin>>tc;
    while (tc--)
    {
        memset(ck,-1,sizeof(ck));
        cin>>st>>s;
        len1=st.size();
        len2=s.size();
        string ans=lcs(0,0);
        cout<<ans<<endl;
        //cout<<add("56","52");

    }
    return 0;
}

