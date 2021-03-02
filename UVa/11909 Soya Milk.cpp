#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double x,ans,l,h,w,s,angle,o;
    while (scanf("%lf%lf%lf%lf",&l,&w,&h,&angle)!=EOF)
    {


        o=acos(-1)*angle/180.0;
            x=(l*tan(o));

        if (h-x>0)
        {
            h=(2*h-x);
        ans=(l*w*h)/2.0;
        }
        else
        {
            angle=90-angle;
            angle=acos(-1)*angle/180.0;
            x=h*tan(angle);
            ans=(x*h*w)/2.0;
        }
        printf("%.3lf mL\n",ans);
    }
return 0;
}
