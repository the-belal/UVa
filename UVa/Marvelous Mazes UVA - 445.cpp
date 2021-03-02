
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    ll tc;
    char st[202];
    while (gets(st))
    {
        int d=0;
        int len=strlen(st);
        for (int i=0; i<len; i++)
        {
            if (st[i]>='0' && st[i]<='9')
                d+=(st[i]-'0');
            else
            {
                if (st[i]=='b')
                {
                    while (d--)
                        cout<<' ';
                }
                else if (st[i]=='!')
                    cout<<endl;
                else if (st[i]=='\n')
                    cout<<endl;
                else
                {
                    while (d--)
                        cout<<st[i];
                }
                d=0;
            }
        }
        cout<<endl;

    }
    return 0;
}
