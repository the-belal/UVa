
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
#define sc(x) scanf("%d",&x)
int main ()
{
    faster;
    ll n,m;
    cin>>n>>m;
    string st[n+5];
    for (int i=0; i<n; i++)
        cin>>st[i];
    int in;
    for (int i=0; i<m; i++)
    {
        string s;
        cin>>s;
        ll mini=1e7;
        int len1=s.size();
        for (int j=0; j<n; j++)
        {
            int len2=st[j].size();
            if (len2>=len1)
            {
                for (int k=0; k<=len2-len1; k++)
                {
                    ll cnt=0;
                    for (int l=k; l<k+len1; l++)
                    {
                        if (st[j][l]!=s[l-k])
                            cnt++;
                    }
                    if (cnt<mini)
                    {
                        mini=cnt;
                        in=j+1;
                    }
                }
            }
        }
        cout<<in<<endl;
    }
    return 0;
}
