#include<bits/stdc++.h>
using namespace std;
vector<char>v;
string str[5005];
string sum(string a, string b)
{
    cout<<a<<" "<<b<<endl;
    int sum,x,mx,i,j,k,y,n,m,carry,len_a,len_b,mini;
    len_a=a.size();
    len_b=b.size();
    mini=min(len_a,len_b);
    mx=max(len_a,len_b);
    carry=0;
    for (i=mx-1; i>=0; i--)
    {
        mini--;

        if (len_a>len_b)
        {
            if (mini>=0)
            {
                x=a[i]-'0';
                y=b[mini]-'0';
                sum=x+y+carry;
            }
            else
            {
                x=a[i]-'0';
                sum=x+carry;
            }
        }
        else
        {
            if (mini>=0)
            {
                x=a[mini]-'0';
                y=b[i]-'0';
                sum=x+y+carry;
            }
            else
            {
                x=b[i]-'0';
                sum=x+carry;
            }
        }
        if (sum>9)
        {
            carry=1;
            sum=sum-10;
        }
        else
            carry=0;
        v.push_back(sum+'0');
        //cout<<sum<<" ";

    }
    if (carry==1)
        v.push_back(1+'0');

    return a;
}
int fibo()
{
    string st,s,ans;
    int i,j,k,len;
    str[1]="1";
    str[2]="1";
    for (i=3; i<=3; i++)
    {
        sum(str[i-1],str[i-2]);
        len=v.size();
        k=0;
        for (j=len-1; j>=0; j--)
        {
            str[i][k]=v[j];
            k++;
            cout<<v[i];
            cout<<endl;

        }
        //cout<<str[i]<<endl;
        v.clear();
    }
}
int main ()
{
    int i,j,n,m,len;
    string st,s,ans;
    fibo();
    while (scanf("%d",&n)==1)
    {
        cout<<str[n]<<endl;
    }
    return 0;
}
