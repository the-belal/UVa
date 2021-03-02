
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000000007
#define pi acos(-1)

int main ()
{
    faster;
    string days[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};

    map<string,int>np;
    np["SUN"]=0;
    np["MON"]=1;
    np["TUE"]=2;
    np["WED"]=3;
    np["THU"]=4;
    np["FRI"]=5;
    np["SAT"]=6;


    map<string,int>mp;
    mp["JAN"]=31;
    mp["FEB"]=28;
    mp["MAR"]=31;
    mp["APR"]=30;
    mp["MAY"]=31;
    mp["JUN"]=30;
    mp["JUL"]=31;
    mp["AUG"]=31;
    mp["SEP"]=30;
    mp["OCT"]=31;
    mp["NOV"]=30;
    mp["DEC"]=31;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        string st,s;
        cin>>st>>s;
        int cnt=0;
        int j=np[s];
        for (int i=1;i<=mp[st];i++)
        {
            if (days[j%7]=="FRI" || days[j%7]=="SAT")
                cnt++;
                j++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
