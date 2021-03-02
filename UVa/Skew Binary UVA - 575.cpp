
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     string st;
     while (cin>>st)
     {
         if (st=="0")
            break;
         reverse(st.begin(),st.end());
         ll sum=0;
         for (int i=0;i<st.size();i++)
         {
             sum+=((st[i]-'0')*((1LL<<(i+1))-1));
         }
         cout<<sum<<endl;
     }

    return 0;
}
