#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
ll a[105];
void calculate()
{
    a[1]=1;
    a[2]=1;
    a[3]=2;
    for (int i=4;i<=86;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return ;
}
int main()
{
    faster;
    ll tc,n;
    calculate();
    while (cin>>n)
    {
        if (n==0)
            break;
        cout<<a[n]<<endl;
    }
    return 0;
}
