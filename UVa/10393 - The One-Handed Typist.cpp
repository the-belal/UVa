#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int len,maxi,n,f,a[1005],i,j,x,p;
    string st[1005];
    map<char,int>ch;
    ch['q']=1;
    ch['a']=1;
    ch['z']=1;
    ch['w']=2;
    ch['s']=2;
    ch['x']=2;
    ch['e']=3;
    ch['d']=3;
    ch['c']=3;
    ch['r']=4;
    ch['f']=4;
    ch['v']=4;
    ch['t']=4;
    ch['g']=4;
    ch['b']=4;
    ch[' ']=5;
    ch[' ']=6;
    ch['y']=7;
    ch['h']=7;
    ch['n']=7;
    ch['u']=7;
    ch['j']=7;
    ch['m']=7;
    ch['i']=8;
    ch['k']=8;
    ch[',']=8;
    ch['o']=9;
    ch['l']=9;
    ch['.']=9;
    ch['p']=10;
    ch[';']=10;
    ch['/']=10;
    while (scanf("%d%d",&f,&n)==2)
    {

        map<int,int>mp;
        set<string>s;
        set<string>:: iterator it;
        maxi=0;
        for (i=0; i<f; i++)
        {
            scanf("%d",&x);
            mp[x]=1;
        }
        getchar();

        for (i=0; i<n; i++)
        {

            cin>>st[i];
            len=st[i].size();
            p=1;
            for (j=0; j<len; j++)
            {
              if (mp[ch[st[i][j]]]==1)
                {
                    p=0;
                    break;
                }
            }
            if (p==1)
            {
                maxi=max(maxi,len);
                a[i]=len;
            }
            else
                a[i]=0;
        }
        for (i=0; i<n; i++)
        {
            if (a[i]==maxi && maxi!=0)
            {
                s.insert(st[i]);
            }
        }
        cout<<s.size()<<endl;
        for (it=s.begin(); it!=s.end(); ++it)
        {
            cout<<*it<<endl;
        }
    }
    return 0;
}
