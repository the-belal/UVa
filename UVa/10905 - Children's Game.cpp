#include<bits/stdc++.h>
using namespace std;
bool cmp (string a,string b)
{
    if ((a+b)>=(b+a))
        return true;
    else
        return false;
}
int main ()
{
    int i,l,n,j;
    string st[1000];
    while (scanf("%d",&n)==1)
    {
        if (n==0)
            break;
        for (i=0;i<n;i++)
        {
            cin>>st[i];
        }
        sort (st,st+n,cmp);
        for (i=0;i<n;i++)
            cout<<st[i];
        printf("\n");
    }
    return 0;
}


