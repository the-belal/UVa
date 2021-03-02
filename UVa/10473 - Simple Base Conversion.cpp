#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power (ll n, ll p)
{
    ll i,ans=1;
    for (i=1;i<=p;i++)
    {
        ans*=n;
    }
    return ans;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,x,p,sum,ans,rem,len,vlen,n;
    string st;
    while (cin>>st)
    {

        if (st[0]=='-')
            break;
            len=st.size();
        if (len>2 && st[0]=='0' && st[1]=='x')
        {
            p=len-3;
            sum=0;
            for (i=2;i<len;i++)

            {
                if (st[i]>='A')
                    x=10+st[i]-'A';
                else
                    x=st[i]-'0';

                sum+=(x*power(16,p));
                p--;
            }
            cout<<sum<<endl;
        }
        else
        {
            vector<ll>v;
            sum=0;
            for (i=0;i<len;i++)
            {
                sum=sum*10+st[i]-'0';
            }
            n=sum;
            while (n!=0)
            {
                rem=n%16;
                n=n/16;
                    v.push_back(rem);
            }
            vlen=v.size();

            if (v.size()==0)
                cout<<"0x0";
            else
                 cout<<"0x";
            for (i=vlen-1;i>=0;i--)
            {
                if (v[i]==10)
                    cout<<"A";
                else if (v[i]==11)
                    cout<<"B";
                else if (v[i]==12)
                    cout<<"C";
                    else if (v[i]==13)
                    cout<<"D";
                    else if (v[i]==14)
                    cout<<"E";
                    else if (v[i]==15)
                    cout<<"F";
                    else
                        cout<<v[i];
            }
            cout<<endl;

        }
    }
}
