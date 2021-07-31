#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //cout<<setprecision(3);
    //cout<<fixed;

    string st;
    map<char,char>mp;
    string temp="`1234567890-=qwertyuiop[]asdfghjkl;'\zxcvbnm,./";
    char n='\n';
    while (getline(cin,st))
    {
        //cout<<st<<endl;
        //string ans="";
        for (int i=0; i<st.size(); i++)
        {
            if (st[i]==' ') cout<<st[i];
            else
            for (int j=0; j<temp.size(); j++)
            {


                if (tolower(st[i])==temp[j])
                    {
                        cout<<temp[j-2];
                        break;
                    }
            }
        }
        cout<<endl;
    }


    return 0;
}
