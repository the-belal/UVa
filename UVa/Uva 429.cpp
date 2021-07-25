#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
map<string,int>mp;
vector<int>ad[205];
bool vis[205];
int cost[205];

void bfs (int s, int d)
{
    queue<int>q;
    q.push(s);
    vis[s]=true;
    cost[s]=0;
    while ( !q.empty())
    {
        int x=q.front();
        q.pop();
        vis [x]=true;

        for (int i=0;i<ad[x].size();i++)
        {
            int y=ad[x][i];
            if ( vis[y]) continue;


            vis[y]=true;
            cost[y]=cost[x]+1;
            q.push(y);
            //cout<<y<<' '<<cost[y]<<endl;
            //getchar();
            if (vis[d]) break;
        }
        if (vis[d]) break;

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
    int n=0;
    string st[300];
    while (tc--)
    {
        while (cin>>st[n])
        {
            mp[st[n]]=n;
            if (st[n][0]=='*') break;
            n++;
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (i==j || st[i].size()!= st[j].size()) continue;

                int cnt=0;
                for (int k=0;k<st[i].size();k++)
                {
                    if (st[i][k]!=st[j][k]) cnt++;
                    if (cnt>=2) break;
                }

                if (cnt == 1) { ad[i].push_back(j);ad[j].push_back(i); }

            }
        }
        string s;
        cin.ignore();
        while (getline(cin,s))
        {
            //cout<<s<<endl;
            string a[4];
            int id=0;
            stringstream ss;
            ss<<s;
            while (ss>>s)
            {
                a[id++]=s;
                //cout<<s<<" *"<<endl;
            }
            if (id==1)
            {
                for (int i=0;i<n;i++) ad[i].clear(),vis[i]=false;
                st[0]=a[0];
                mp[st[0]]=0;
                n=1;
                break;
            }
            cout<<a[0]<<" "<<a[1]<<' ';
            bfs(mp[a[0]],mp[a[1]]);
            //cout<<ad[mp[a[0]]].size()<<" Bal"<<endl;
            cout << cost[mp[a[1]]]<<endl;

        }
        if (tc>0) cout<<endl;
        for (int i=0;i<n;i++) ad[i].clear(),vis[i]=false;
        n=0;
    }
    return 0;
}

