#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int len,i,j,p,n,tc,l;
    cin>>tc;
    cin.ignore();
    while (tc--)
    {

        string str;
        char ch;
        getline(cin,str);
        len=str.size();
        stack<char>st;
        st.push(str[0]);
        for (i=1; i<len; i++)
        {
            l=st.size();
            if (l==0 && str[i]!=' ')
                st.push(str[i]);
            else if (str[i]!=' ')
            {
                ch=st.top();
                if (ch==')' || ch==']')
                    break;
                if (ch=='(')
                {
                    if (str[i]==')')
                        st.pop();
                    else
                        st.push(str[i]);
                }
                else if (ch=='[')
                {
                    if (str[i]==']')
                        st.pop();
                    else
                        st.push(str[i]);
                }
            }
        }
        l=str.size();
        len=st.size();
        if (l==0)
            cout<<"Yes\n";
        else if (len==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
    return 0;
}
