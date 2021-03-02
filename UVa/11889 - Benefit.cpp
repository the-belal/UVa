
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main ()
{
    ll tc,a,b,c,i,n,r,len,lc;
    scanf("%llu",&tc);
    while (tc--)
    {
        vector<ll>v;
       scanf("%llu%llu",&a,&c);
       if (c%a!=0)
        printf("NO SOLUTION\n");
        else if (a==c)
            printf("1\n");
       else
       {
           n=c;
           r=sqrt(n);
           for (i=1;i<=r;i++)
           {
               if (n%i==0)
               {
                   v.push_back(n/i);
                   v.push_back(i);
               }
           }
           sort(v.begin(),v.end());
           len=v.size();
           for (i=0;i<len;i++)
           {


                  lc= __gcd(v[i],a);
                  if ((v[i]*a)%lc==0 && v[i]!=1 && v[i]!=a)
                  {
                      if ((v[i]*a)/lc==c)
                      break;
                  }
           }
           printf("%llu\n",v[i]);
       }
    }
    return 0;
}
