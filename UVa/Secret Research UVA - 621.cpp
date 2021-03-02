
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        string st;
        cin>>st;
        int len=st.size();
        if (st=="1" || st=="78" || st=="4")
            cout<<"+"<<endl;
        else if (st[len-2]=='3' && st[len-1]=='5')
            cout<<"-"<<endl;
        else if (st[0]=='9' && st[len-1]=='4')
            cout<<"*"<<endl;
        else if (st[0]=='1' && st[1]=='9' && st[2]=='0')
            cout<<"?"<<endl;

    }
    return 0;
}
