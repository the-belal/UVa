#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,len,cnt,n;
    string st,str;
    set<string>s;
    set<string> :: iterator it;
    while (cin>>st)
    {
        len=st.size();
        for (i=0;i<len;i++)
        {
            if (isalpha(st[i]))
            str.push_back(tolower(st[i]));
            else
            {
                s.insert(str);
        str.clear();
            }

        }
        s.insert(str);
        st.clear();
        str.clear();
    }
    for (it=s.begin();it!=s.end();++it)
        {
            if (it!=s.begin())
            cout<<*it<<endl;
        }
    return 0;
}
