
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)
int main ()
{
    //faster;
    int tc,n,k,l,r;
    double x1,x2,x3,x4,y1,y2,y3,y4;
    while(cin>>x1>>y1)
    {
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        double d1=0.0,d2=0.0;
        if (x2==x3 && y2==y3)
        {
            double x=(double) (x1+x4);
            double y=(double) (y1+y4);
             d1=x-x2;
             d2=y-y2;
             //cout<<d1<<' '<<d2<<endl;
        }
        else if (x1==x4 && y1==y4)
        {
            double x=(double) (x2+x3);
            double y=(double) (y2+y3);
             d1=x-x1;
             d2=y-y1;
        }
        else if (x1==x3 && y1==y3)
        {
            double x=(double) (x2+x4);
            double y=(double) (y2+y4);
             d1=x-x1;
             d2=y-y1;
        }
        else if (x2==x4 && y2==y4)
        {
            double x=(double) (x1+x3);
            double y=(double) (y1+y3);
             d1=x-x2;
             d2=y-y2;
        }
         else if (x2==x1 && y2==y1)
        {
            double x=(double) (x4+x3);
            double y=(double) (y4+y3);
             d1=x-x2;
             d2=y-y2;
        }
        else if (x3==x4 && y3==y4)
        {
            double x=(double) (x1+x2);
            double y=(double) (y1+y2);
             d1=x-x3;
             d2=y-y3;
        }
        printf("%.3lf %.3lf\n",d1,d2);
    }
    return 0;
}
