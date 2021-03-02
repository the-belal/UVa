#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
int main ()
{
    faster;
    ll tc,n,k;
    //string st;
    cin>>tc;
    while (tc--)
    {
        string st[4];
        // cin>>st;
        int x=0,O=0;
        for (int i=0; i<3; i++)
        {
            cin>>st[i];
            for (int j=0; j<3; j++)
            {
                if (st[i][j]=='X')
                    x++;
                else if (st[i][j]=='O')
                    O++;
            }

        }
        //cout<<x<< ' '<<O<<endl;
        if (O>x || (x-O)>1)
            cout<<"no"<<endl;
        else
        {
            bool xx=false,oo=false;

            if (O==x)
            {
                if (st[0][0]=='X' && st[1][0]=='X' && st[2][0]=='X')
                    xx=true;
                else if (st[0][1]=='X' && st[1][1]=='X' && st[2][1]=='X')
                    xx=true;
                else if (st[0][2] =='X' && st[1][2]=='X' && st[2][2]=='X')
                    xx=true;
                else if (st[0][0]=='X' && st[1][1]=='X' && st[2][2]=='X')
                    xx=true;
                else if (st[0][2]=='X' && st[1][1]=='X' && st[2][0]=='X')
                    xx=true;
                else if (st[0][0]=='X' && st[0][1]=='X' && st[0][2]=='X')
                    xx=true;
                else if (st[1][0]=='X' && st[1][1]=='X' && st[1][2]=='X')
                    xx=true;
                else if (st[2][0]=='X' && st[2][1]=='X' && st[2][2]=='X')
                    xx=true;

            }
            else
            {
                if (st[0][0]=='O' && st[1][0]=='O' && st[2][0]=='O')
                    oo=true;
                else if (st[0][1]=='O' && st[1][1]=='O' && st[2][1]=='O')
                    oo=true;
                else if (st[0][2]=='O' && st[1][2]=='O' && st[2][2]=='O')
                    oo=true;
                else if (st[0][0]=='O' && st[1][1]=='O' && st[2][2]=='O')
                    oo=true;
                else if (st[0][2]=='O' && st[1][1]=='O' && st[2][0]=='O')
                    oo=true;
                else if (st[0][0]=='O' && st[0][1]=='O' && st[0][2]=='O')
                    oo=true;
                else if (st[1][0]=='O' && st[1][1]=='O' && st[1][2]=='O')
                    oo=true;
                else if (st[2][0]=='O' && st[2][1]=='O' && st[2][2]=='O')
                    oo=true;
            }
            //cout<<xx<<' '<<oo<<endl;
            if (xx==true || oo==true)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;

            //cout<<"no"<<endl;
        }
    }
    return 0;
}
