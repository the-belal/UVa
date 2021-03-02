
#include<bits/stdc++.h>
using namespace std;
int n,m;
int vis[105][105];
string st[105];
void rec (int i, int j)
{
    if (i<0 || j<0 || i>=n || j>=m || st[i][j]=='*' || vis[i][j]==1)
        return ;
        vis[i][j]=1;
    rec (i,j-1);
    rec(i,j+1);
    rec(i+1,j);
    rec(i+1,j+1);
    rec (i+1,j-1);
    rec(i-1,j);
    rec(i-1,j+1);
    rec(i-1,j-1);
}
int main ()
{
    int i,j;
    while (cin>>n>>m)
    {
        if (n==0)
            break;
        //string st[105];
        for (i=0;i<n;i++)
        {
            cin>>st[i];
        }
        int cnt=0;
        memset(vis,0,sizeof(vis));
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                if (vis[i][j]==0 && st[i][j]=='@')
                {
                  cnt++;
                  rec(i,j);
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
