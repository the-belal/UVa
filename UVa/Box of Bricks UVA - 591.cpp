
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int tc=1;
     int n;
     while (cin>>n && n>0)
     {
         int a[n+5];
         int sum=0;
         for (int i=0;i<n;i++)
         {
             cin>>a[i];
             sum+=a[i];
         }
         int avg=sum/n;
         sum=0;
         for (int i=0;i<n;i++)
         {
             if (avg<a[i])
                sum+=a[i]-avg;
         }
         cout<<"Set #"<<tc<<endl;
         tc++;
         cout<<"The minimum number of moves is "<<sum<<'.'<<endl<<endl;

     }
    return 0;
}
