#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cout<<setprecision(2);
//    cout<<fixed;
    for (int i=2;i<=200;i++)
    {
        bool chk=false;
        for (int j=2;j<i;j++)
        {
            for (int k=j;k<i;k++)
            {
                for (int l=k;l<i;l++)
                {
                    if (j*j*j+k*k*k+l*l*l==i*i*i)
                    {
                        cout <<"Cube = " << i << ", Triple = (" <<j << "," << k<< "," << l <<")"<<endl;

                    }
                }
            }
        }
    }
    return 0;
}

