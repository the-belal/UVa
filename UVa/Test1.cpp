#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mmod=1000000007;
ll a[10005];
//int root(int Arr[ ],int i)
//{
//    while(Arr[ i ] != i)           //chase parent of current element until it reaches root.
//    {
//     i = Arr[ i ];
//    }
//    return i;
//}
//int union(int Arr[ ] ,int A ,int B)
//{
//    int root_A = root(Arr, A);
//    int root_B = root(Arr, B);
//    Arr[ root_A ] = root_B ;
//}
//bool findd(int A,int B)
//{
//    if( root(A)==root(B) )
//    return true;
//    else
//    return false;
//}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll r,g,b;

        //ll a[5];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        ll res=a[0],dif=a[1]+a[0]-a[2];
        //cout<<dif<<endl;
        if ((a[0]+a[1])>a[2])
        {
            res=a[2]+min(dif/2,dif/2);
        }
         res=max(a[0]+min(a[2]-a[0],a[1]),res);
        ll ans=a[0];
        a[1]-=(a[0]/2);
        a[2]-=(a[0]/2);
        if (a[0]%2==1)
        {
            a[2]--;
        }
        ans+=min(a[1],a[2]);
        cout<<max(ans,res)<<endl;

    }

    return 0;
}
