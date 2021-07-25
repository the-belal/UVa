#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,i,j,p,tc,a[1005],x,y,sum;
    cin>>tc;
    while (tc--)
    {
        scanf("%d",&n);
        for (i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        p=0;
        sum=a[1];
        for (i=n-1;i>1;i-=2)
        {
            if (a[i]>a[1])
            {
                sum+=a[p];
                sum+=a[i];
              if (p==0)
                    p=1;
              else
                p=0;
            }
            else
                break;
        }
        cout<<sum<<endl;
    }


}
