#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
int l[105],i[105],v[105],x[105],c[105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cout<<setprecision(2);
//    cout<<fixed;
    ll n;

    for (int j=1; j<=100; j++)
    {
        if (j==100) c[j]=1;
        else if (j>=90)
        {
            x[j]=1;
            c[j]=1;
            x[j]+=x[j%90];
            l[j]+=l[j%90];
            v[j]+=v[j%90];
            i[j]+=i[j%90];
        }
        else if (j>=50)
        {
            l[j]=1;
            x[j]+=x[j%50];
            l[j]+=l[j%50];
            v[j]+=v[j%50];
            i[j]+=i[j%50];
        }
        else if (j>=40)
        {
            x[j]=1;
            l[j]=1;
            x[j]+=x[j%40];
            l[j]+=l[j%40];
            v[j]+=v[j%40];
            i[j]+=i[j%40];
        }
        else if (j>=10)
        {
            x[j]=j/10;

            x[j]+=x[j%10];
            l[j]+=l[j%10];
            v[j]+=v[j%10];
            i[j]+=i[j%10];
        }
        else if (j==9)
        {
            x[j]=1;
            i[j]=1;
        }
        else if (j>=5)
        {
            v[j]=1;
            x[j]+=x[j%5];
            l[j]+=l[j%5];
            v[j]+=v[j%5];
            i[j]+=i[j%5];
        }
        else if (j==4)
        {
            v[j]=1;
            i[j]=1;
        }
        else
        {

            i[j]=j;
        }
    }
    for (int j=2;j<=100;j++)
    {
        i[j]+=i[j-1];
        v[j]+=v[j-1];
        x[j]+=x[j-1];
        l[j]+=l[j-1];
        c[j]+=c[j-1];
    }
    int t=1;
    while (cin>>n)
    {
        if (n==0) break;


        cout<<n<<": "<<i[n]<<" i, "<<v[n]<<" v, "<<x[n]<<" x, "<<l[n]<<" l, "<<c[n]<<" c"<<endl;
    }


    return 0;
}

