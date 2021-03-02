#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s,b,l,r,p,ans,i,j,x,y;
    while (scanf("%d%d",&s,&b)==2)
    {
        if (s==0 && b==0)
            break;
        map<int,int>mp;
        map<int,int> :: iterator it;
        for (i=1; i<=s; i++)
            mp[i]=1;
        for (i=0; i<b; i++)
        {
            scanf("%d%d",&l,&r);
            if (l==1)
                {
                    it=mp.find(l);
                    mp.erase(it);
                    printf("* ");
                    //cout<<(*it).first;
                }
            else
            {

                    it=mp.find(l);
                    x= (*it).first;
                    mp.erase(it);
                    it--;
                    x=(*it).first;
                    if (mp[x]!=0)
                    cout<<(*it).first;
                    else
                        cout<<"*";
                }
                if (r==s)
                {
                    if (l!=r)
                    {
                    it=mp.find(r);
                    mp.erase(it);
                    }
                    cout<<" *\n";
                }
                else
                {
                     it=mp.find(r);
                    y = (*it).first;
                     mp.erase(it);
                    it++;
                    cout<<" "<<(*it).first<<endl;

                }
                for (j=l+1; j<=r-1; j++)
                {
                    if (mp[j]!=0)
                    {
                    it=mp.find(j);
                    mp.erase(it);
                    }
                }
            }
        }
    }
