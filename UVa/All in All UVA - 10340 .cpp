
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     string st,s;
     ll tc;
     cin>>tc;
     while (tc--)
     {
         ll n;
         cin>>n;
         string st;
         cin>>st;

         ll target=0;
         for (int i=0;i<st.size();i++)
         {
             if (st[i]=='L')
                target-=2;
             else if (st[i]=='R')
                target+=2;
             else if (st[i]=='U')
                target-=1;
             else
                target++;
                //cout<<target<<" ";
         }
         vector<int>v;
         ll curr=0;
         cout<<target<<" bal"<<endl;
         for (int i=0;i<st.size();i++)
         {
             if (st[i]=='L')
                curr-=2;
             else if (st[i]=='R')
                curr+=2;
             else if (st[i]=='U')
                curr-=1;
             else
                curr++;
                if (curr==target)
                {

                    v.push_back(i+1);
                }
                cout<<curr<<' ';
         }
         if (v.size()==1)
            {
                cout<<-1<<endl;
                continue;
            }
         int mini=st.size();
         for (int i=1;i<v.size();i++)
         {
             mini=min(mini,v[i]-v[i-1]);
         }
         for (int i=1;i<v.size();i++)
         {
             if (v[i]-v[i-1]==mini)
             {
                 cout<<v[i-1]+1<<' '<<v[i]<<endl;
             }
         }
     }
    return 0;
}
