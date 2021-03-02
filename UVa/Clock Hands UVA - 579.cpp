
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    int h,m;
    char ch;
    while (cin>>h>>ch>>m)
    {
        if (h==0 && m==0)
            break;
        //cout<<h<<' '<<m<<endl;
        if (h==12)
        h=0;
        double hour_angle = 0.5 * (h * 60 + m);
        double minute_angle = 6.0 * m;
        double ans=abs(hour_angle-minute_angle);
        if (ans>180)
            ans=360.0-ans;
        printf("%.3lf\n",ans);
    }
    return 0;
}
