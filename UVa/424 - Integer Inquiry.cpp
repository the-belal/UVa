#include<bits/stdc++.h>
using namespace std;
vector<char>v;
string str[5005];
string sume(char a[], char b[])
{
    //cout<<a<<" "<<b<<endl;
    int sum,x,mx,i,j,k,y,n,m,carry,len_a,len_b,mini;
    len_a=strlen(a);
    len_b=strlen(b);
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
    int m,i,j,n,len,k;
    n=0;
    char st[105][105],s[105];
    while (gets(st[n]))
    {
        if (n==0)
            strcpy(s,st[0]);
            if (strcmp(st[n],"0")==0)
                break;
        n++;
    }

    for (i=1;i<n;i++)
    {

    sume(s,st[i]);
    len=v.size();
    k=0;
    for (j=len-1;j>=0;j--)
    {
        s[k]=v[j];
        k++;
    }
    s[k]='\0';
    v.clear();
    }
    printf("%s\n",s);
    return 0;
}
