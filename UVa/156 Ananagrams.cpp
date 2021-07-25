#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cout<<setprecision(2);
//    cout<<fixed;
    string st[1005];
    int i=0;
    while (cin>>st[i])
    {
        if (st[i]=="#") break;
        i++;
    }
    //cout<<i<<endl;
    int n=i;
    string temp[1005];
    map<string, int>mp;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<st[i].size();j++)
        {
            temp[i].push_back(st[i][j]);
            st[i][j]=tolower(st[i][j]);

        }
        sort(st[i].begin(),st[i].end());
        //cout<<st[i]<<endl;
        mp[st[i]]++;
    }
    vector<string>v;
    for (int i=0;i<n;i++)
    {
        if (mp[st[i]]==1) v.push_back(temp[i]);
    }

    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++) cout<<v[i]<<endl;


    return 0;
}

