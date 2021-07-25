
#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
vector<int>ad[30];
bool vis[30];
void dfs(int node)
{
    for (int i=0;i<ad[node].size();i++)
    {
        int y = ad[node][i];
        if (vis[y]) continue;

        vis[y]=true;

        dfs(y);

    }

    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cout<<setprecision(2);
//    cout<<fixed;
    ll tc;
    cin>>tc;
    string st;
    cin>>st;

    for (int t=1;t<=tc;t++)
    {
        if (t>1) cout<<endl;

        if (st.size()==1)
        {
            int root = st[0]-'A';

            while (cin>>st)
            {

                if (st.size()==1) break;

                ad[st[0]-'A'].push_back(st[1]-'A');
                ad[st[1]-'A'].push_back(st[0]-'A');
            }
            int cnt=0;

            memset(vis,false,sizeof(vis));

            for (int i=0;i<=root;i++)
            {
                if (vis[i]==false)
                {
                    vis[i]=true;
                    cnt++;
                    dfs(i);
                }
            }

            for (int i=0;i<=root;i++) ad[i].clear();

            cout<<cnt<<endl;


        }


    }
    return 0;
}

