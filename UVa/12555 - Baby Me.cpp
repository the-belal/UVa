#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string st;
    int t,ans,a,b,tc;
    cin>>tc;
    getchar();
    for (t=1;t<=tc;t++)
    {

        getline(cin,st);
        a=-1;
        b=-1;
        int p=0;

        for (int i=0;i<st.size();i++)
        {
            if (st[i]>'0' && st[i]<'9')
            {
                if (p==0)
                {
                    a=a*10+st[i]-'0';
                }
                else
                    b=b*10+st[i]-'0';
            }
            else
                p=1;
        }
        printf("Case %d: ",t);
        cout<<a*0.5+b*0.05<<endl;
    }
    return 0;

}
