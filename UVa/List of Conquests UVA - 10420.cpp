
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll n, ll m)
{
    if (n==1)
        return 1;
    if (n>m)
        return 0;

    if (n%2==0)
        return 1+fun(n/2,m);
    return 1+fun(3*n+1,m);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll m,n,x,y;
    ll tc=1;
    cin>>tc;
    set<string>st;
    set<string>:: iterator it;
    cin.ignore();
    map<string,int>mp;
    while (tc--)
    {
        string s;

        getline(cin,s);
        string name;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]==' ')
                break;
            name.push_back(s[i]);
        }
        mp[name]++;
        st.insert(name);
    }
    for (it=st.begin();it!=st.end();it++)
    {
        cout<<(*it)<<' '<<mp[(*it)]<<endl;
    }
    return 0;
}
