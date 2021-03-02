
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
vector<int>ad[302];
int vis[302];
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    vis[s]=0;
    while (!q.empty())
    {
        int x=q.front();
        q.pop();
        for (int i=0; i<ad[x].size(); i++)
        {
            int y=ad[x][i];
            if (vis[y]==-1)
            {
                if (vis[x]==0)
                    vis[y]=1;
                else if (vis[x]==1)
                    vis[y]=0;
                q.push(y);
            }
        }
    }
    return ;
}
int main()
{
    faster;
    ll tc;
    ll i,j,len,n,m;
    while (cin>>n)
    {
        if (n==0)
            break;
        cin>>m;
        memset(vis,-1,sizeof(vis));
        for (int i=0; i<m; i++)
        {
            ll u,v;
            cin>>u>>v;
            ad[u].push_back(v);
            ad[v].push_back(u);
        }
        bfs(0);
        bool chk=true;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<ad[i].size();j++)
            {
                int y=ad[i][j];
                if (vis[i]==vis[y])
                {
                    chk=false;
                    break;
                }
            }
        }
        if (chk)
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;

        for (int i=0; i<n; i++)
        {
            ad[i].clear();
        }
    }
    return 0;
}
