#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
vector<int>ad[100005];
bool vis[100005];
int level[100005];
int bfs(int node,int cost)
{
    queue<int>q;
    q.push(node);
    vis[node]=true;
    level[node]=0;
    int cnt=0;
    while (!q.empty())
    {
        int x=q.front();
        q.pop();
        vis[x]=true;
        for (int i=0;i<ad[x].size();i++)
        {
            int y=ad[x][i];
            if (vis[y]) continue;

            vis[y]=true;
            q.push(y);
            level[y]=level[x]+1;
            if (level[y]<=cost) cnt++;
            else return cnt+1;
        }
    }

    return cnt+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cout<<setprecision(2);
//    cout<<fixed;
    ll n;
    int t=1;
    while (cin>>n)
    {
        if (n==0) break;
        map<int,int>mp;
        int cnt=0;
        vector<int>nodes;
        for (int i=0;i<n;i++)
        {
            int u,v;
            cin>>u>>v;
            if (mp[u]==0)
            {
                cnt++;
                mp[u]++;
                nodes.push_back(u);
            }
            if (mp[v]==0)
            {
                nodes.push_back(v);
                mp[v]++;
                cnt++;
            }

            ad[u].push_back(v);
            ad[v].push_back(u);
        }
        int s,tc;
        while (cin>>s>>tc)
        {
            memset(vis,false,sizeof(vis));
            if (s==0 && tc==0) break;
            ll ans=cnt-bfs(s,tc);
            cout<<"Case "<<t++<<": "<<ans<<" nodes not reachable from node "<<s<<" with TTL = "<<tc<<'.'<<endl;

        }
        for (int i=0;i<nodes.size();i++) ad[nodes[i]].clear();
    }


    return 0;
}

