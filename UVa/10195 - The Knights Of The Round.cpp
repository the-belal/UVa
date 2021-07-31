#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        cout<<setprecision(3);
        cout<<fixed;

    double a,b,c;
    while (cin>> a>> b >> c)
    {
        double perimeter = (a+b+c)/2.0;
        double AreaTriangle = sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c)*1.0)*1.0;
        double radiusCircle = AreaTriangle/(perimeter*1.0);
        if (a==0 && b==0 && c==0)
            radiusCircle=0.000;
        cout<<"The radius of the round table is: " << radiusCircle<<endl;
    }


    return 0;
}
