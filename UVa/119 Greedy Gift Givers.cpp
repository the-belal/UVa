#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,gift,m,tc,p;
    string  st[100],s;
    tc=0;
    while (scanf("%d",&n)==1)
    {
        map<string,int>mp;
        getchar();
        for (i=0; i<n; i++)
            cin>>st[i];
        for (i=0; i<n; i++)
        {
            cin>>s;
            scanf("%d%d",&m,&p);
            gift=0;
            if (p!=0 && m!=0 )
            {
                gift=(m/p);
                mp[s]-=(gift*p);
                getchar();
            }
            for (j=0; j<p; j++)
            {
                cin>>s;
                mp[s]+=gift;
            }


        }
        if (tc!=0)
            cout<<endl;
        tc++;
        for (i=0; i<n; i++)
        {
            cout<<st[i]<<" "<<mp[st[i]]<<endl;
        }
    }
    return 0;
}
