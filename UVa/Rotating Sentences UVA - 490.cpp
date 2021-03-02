
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    vector<string>v;
    string st;
    ll maxi=0;
    while (getline(cin,st))
    {
        v.push_back(st);
        ll mx=st.size();
        maxi=max(maxi,mx);
    }
    ll l=v.size();
    for (int i=0; i<maxi; i++)
    {
        for (int j=l-1; j>=0; j--)
        {
            if (i<v[j].size())
                cout<<v[j][i];
            else
                cout<<' ';

        }
        cout<<endl;
    }
    //cout<<endl;
    return 0;
}
