#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pi acos(-1)
struct st{
    ll l,r;
};
bool cmp(st i, st j)
{
    if (i.l==j.l)
        return i.r<j.r;
    return i.l<j.l;
}
int main()
{
    faster;
    ll n,m,k;
    cin>>n>>m>>k;
    vector<st>v[1003];
    ll r,x,y;
    map<int,int>mp;
    int cnt=1;
    for (int i=0;i<k;i++)
    {
        cin>>r>>x>>y;
        st var;
        var.l=x,var.r=y;
        if (mp[r]==0)
        {
            v[cnt].push_back(var);
            mp[r]=cnt;
            cnt++;
        }
        else{
                v[mp[r]].push_back(var);

        }
    }
    for (int i=0;i<cnt;i++)
    {
       sort(v[i].begin(),v[i].end(),cmp);
    }
    ll sum=0;
    for (int i=0;i<cnt;i++)
    {
        ll chilo=0;
        for (int j=0;j<v[i].size();j++)
        {
            ll extra=v[i][j].l-chilo-1;
            chilo=max(chilo,v[i][j].r);
            //cout<<chilo<<' '<<i<<endl;
            if (extra>0)
                sum+=extra;
        }
        if (v[i].size()>0)
        sum+=(m-chilo);
        //cout<<sum<<endl;
    }
    cout<<sum+(n-cnt+1)*m<<endl;

    return 0;
}
