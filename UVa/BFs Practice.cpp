#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj[10005];
map<ll,ll>vis;
ll u[1000005],v[1000005];
ll bfs (ll source)
{
    ll i,j,p,x,y,len,n;
    queue<ll>q;
    q.push(source);
    while (!q.empty())
    {
        x=q.front();
        vis[x]=1;
        q.pop();
        len=adj[x].size();
                for (i=0; i<len; i++)
            {
                y=adj[x][i];
                if (vis[y]!=1)
                {
                    q.push(y);
                    vis[y]=1;
                }
            }

    }

}
int main ()
{
    ll n,p,r,i,j,len,in,m,net;
    string st;
    net=1;
    while (scanf("%lld%lld",&n,&m)==2)
    {
        if (n==m && n==0)
            break;
        map<string,ll>mp;
        in=0;
        for (i=0; i<m; i++)
        {
            cin>>st;
            if (mp[st]==0)
            {
                mp[st]=in;
                in++;
            }
            v[i]=mp[st];
            cin>>st;
            if (mp[st]==0)
            {
                mp[st]=in;
                in++;
            }
            u[i]=mp[st];
            adj[v[i]].push_back(u[i]);
            adj[u[i]].push_back(v[i]);

        }
        bfs(u[i-1]);
        p=1;
        printf("Network %lld: ",net);
        net++;
        for (i=0; i<m; i++)
        {
            if (vis[u[i]]==0 || vis[v[i]]==0)
            {
                p=0;
                printf("DISCONNECTED\n\n");
                break;
            }
        }
        vis.clear();
        ll mini;
        if (p==1)
        {
            for (i=0;i<m;i++)
            {
                if (i==0)
                    mini=adj[v[i]].size();
                    len=adj[v[i]].size();
                mini=min (len,mini);
                len=adj[u[i]].size();
                mini=min (len,mini);
            }
            printf("%lld\n\n",n-mini-1);
        }
        for (i=0;i<m;i++)
        {
            adj[v[i]].clear();
            adj[u[i]].clear();
        }
    }
    return 0;

}
