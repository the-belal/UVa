#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    faster;
    int q,val;
    stack<int>st,temp;
    cin>>q;
    while (q--)
    {
        int type;
        cin>>type;
        if (type==1)
        {
            int x;
            cin>>x;
            if (st.empty())
            {
                while (!temp.empty())
                {
                    st.push(temp.top());
                    temp.pop();
                }
            }
            st.push(x);
        }
        else
        {
            if (temp.empty())
            {
                while (!st.empty())
                {
                    temp.push(st.top());
                    st.pop();
                }
            }
            if (type==2)
                temp.pop();
            else
                cout<<temp.top()<<'\n';
        }

    }

    return 0;
}
