#include<bits/stdc++.h>
using namespace std;
vector<char>v;
string sume(string a,string b)
{
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

    }
    if (carry==1)
        v.push_back(1+'0');

    return a;
}
int main ()
{
    int m,i,j,n,num,len,k,si;
    n=0;
    string st[5005];
    st[0].push_back('0');
    st[1].push_back('1');
    for (i=2;i<=5002;i++)
    {
    sume(st[i-1],st[i-2]);
    len=v.size();
    for (j=len-1;j>=0;j--)
    {
        st[i].push_back (v[j]);
    }
    v.clear();
    }
    while (scanf("%d",&num)!=EOF)
    {
        printf("The Fibonacci number for %d is ",num);
        cout<<st[num]<<endl;
    }
    return 0;
}

