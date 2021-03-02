#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,len,n,p;
    string st;
    while (cin>>st)
    {
        deque<char>dq;
        len=st.size();
        p=0;
        i=0;
        p=0;
        while (i<len)
            {
                while (st[i]!=']')
            {
                i++;
                if (i==len)
                    break;
            }
            p=i-1;
            while (p>=0 || st[p]!='[')
            {
                dq.push_front(st[p]);
                p--;
            }
            /*while (st[i]!='[' && i<len)
            {
                i++;
            }
            p=i-1;
            while (p>=0 || st[p]!=']')
            {
                dq.push_back(st[p]);
                p--;
            }*/
            }
        while (!dq.empty())
        {
            cout<<dq.front();
            dq.pop_front();
        }
        cout<<endl;
    }
}
