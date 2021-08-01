#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //    cout<<setprecision(10);
    //    cout<<fixed;
    string st;
    map<string,string>mp;
    while (getline(cin,st))
    {
        if (st.size()==0) break;
        int cnt=0;
        string a,b;
        for (int i=0;i<st.size(); i++)
        {
            if (cnt>0)
            {
                b.push_back(st[i]);
            }
            else if (st[i]==' ') cnt++;
            else a.push_back(st[i]);
        }
        mp[b]=a;

    }
    while (cin>>st)
    {
        if (mp.find(st)==mp.end())
            {
                cout<<"eh"<<endl;
            }
            else cout<<mp[st]<<endl;
    }



    return 0;
}
