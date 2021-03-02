
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int digitSum(int n)
{
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int st=0;
        st=max(st,n-50);
        int flag=-1;
        for (int i=st;i<=n;i++)
        {
            if (digitSum(i)+i==n)
            {
                flag=i;
                break;
            }
        }
        if (flag==-1)
            cout<<0<<endl;
        else
            cout<<flag<<endl;
    }
    return 0;
}
