#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,d,x,y,a,b,n,cnt,p,q;
    ll tc,t;
    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld%lld",&t,&n);
        for (i=0; i<t; i++)
        {
            cnt=0;
            scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
           // scanf("%lld%lld",&x,&y);
            if (abs(x-a)==abs(y-b))
                printf("1\n");
            else
            {

                //increasing both
                d=min(abs(x-n),abs(y-n));
                p=x+d;
                q=y+d;
                //printf("%lld %lld\n",p,q);
                if (abs(p-a)==abs(q-b))
                    cnt=2;
                //both decreasing
                d=min(abs(x-1),abs(y-1));
                p=x-d;
                q=y-d;
               // printf("%lld %lld\n",p,q);
                if (abs(p-a)==abs(q-b))
                    cnt=2;
               if (x==y)
               {
                  d=min((n-x),(x-1));
                  p=x+d;
                  q=y-d;
                  if (abs(p-a)==abs(q-b))
                    cnt=2;
                  //printf("%lld %lld\n",p,q);
                  p=x-d;
                  q=y+d;
                  if (abs(p-a)==abs(q-b))
                    cnt=2;
                  //printf("%lld %lld\n",p,q);
               }
               else
               {
                    // x increasing
                d=(y-1);
                  p=x+d;
                q=y-d;
                //printf("%lld %lld\n",p,q);
                if (abs(p-a)==abs(q-b))
                    cnt=2;
                //y increasing
                d=(x-1);
                  p=x-d;
                q=y+d;
                //printf("%lld %lld\n",p,q);
                if (abs(p-a)==abs(q-b))
                    cnt=2;
               }

                    if (cnt==2)
                        printf("2\n");
                    else
                        printf("no move\n");
            }

        }

    }
}
