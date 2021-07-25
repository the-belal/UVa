#include<bits/stdc++.h>
using namespace std;

long long int u,t,n,a,b,ans,ans1;

int main()
{

    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n>>a>>b;
        if(n==1)
        {
            cout<<a<<endl;
        }

        else
        {
            if(n%2==1)
            {
                u =n-1;
                ans=(u/2*b)+a;
            }
            else
            {
                ans=(n/2)*b;
            }

            ans1=n*a;

            if(ans>ans1)
            {
                cout<<ans1<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }

    }
}
