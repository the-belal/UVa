#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
map<int,char>mp;
map<char,int>np;
ll Deci (string st , int base)
{
    ll sum=0;
    reverse(st.begin(),st.end());

    for (int i=0;i<st.size();i++)
    {
        if (st[i]>='0' && st[i]<='9')
        sum+=pow(base,i)* (st[i]-'0');
        else
        sum+=pow(base,i)*(np[st[i]]);
    }
    return sum;
}
string decTobase(ll value , int base)
{
    string st;
    while(value>0 )
    {
        if (value%base<=9)
        st.push_back((value%base)+'0');
        else
        st.push_back(mp[value%base]);
        value/=base;
    }
    if (st.size()==0) st.push_back('0');
    while(st.size()<7) st.push_back(' ');
    if (st.size()>7) st="RORRE  ";
    reverse(st.begin(), st.end());
    return st;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    cout<<setprecision(2);
//    cout<<fixed;
    string st;
    int f_base, t_base;
    while (cin>>st>>f_base>>t_base)
    {
        mp[10]='A';
        mp[11]='B';
        mp[12]='C';
        mp[13]='D';
        mp[14]='E';
        mp[15]='F';

        np['A'] = 10;
        np['B'] = 11;
        np['C'] = 12;
        np['D'] = 13;
        np['E'] = 14;
        np['F'] = 15;

        ll dec_value = Deci(st, f_base);
        //cout<< dec_value<<endl;
        string ans= decTobase(dec_value,t_base);
        cout<<ans<<endl;

    }
    return 0;
}

