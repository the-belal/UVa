#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cnt,i,j,len,p,n,k,l,t;
    string st,s,ans[10005],temp;
    map<string,int>mp;
    map<string,int>:: iterator it;
    map<string,int>chinho;
    map<string,string>mapi;
    cnt=0;
    i=0;
    while (1)
    {
        getline(cin,st);
        if (st=="0")
            break;
        if (st[0]>='A' && st[0]<='Z')
        {
            cnt++;
            s=st;
            mp[s]=0;
        }
        else
            {
                if (chinho[st]==0 && st!="1")
                {
                    mp[s]++;
                    chinho[st]=cnt;
                    mapi[st]=s;
                }
                else if (chinho[st]!=cnt && st!="1" && chinho[st]!=-1)
                    {
                        mp[mapi[st]]--;
                        chinho[st]=-1;
                    }

            }

            if (st=="1")
            {
                j=0;
                for (it=mp.begin();it!=mp.end();++it)
                {
                    ans[j]=(*it).first;

                    //cout<<(*it).first<<" "<<(*it).second<<endl;
                    j++;
                }
                for (k=0;k<j;k++)
                {
                    //cout<<ans[k]<<" "<<mp[ans[k]]<<endl;
                    for (l=0;l<j-1;l++)
                    {
                        if (mp[ans[l]]<mp[ans[l+1]])
                        {
                            temp=ans[l];
                            t=mp[ans[l]];
                            ans[l]=ans[l+1];
                            mp[ans[l]]=mp[ans[l+1]];
                            ans[l+1]=temp;
                            mp[ans[l+1]]=t;
                        }
                    }
                }

                for (k=0;k<j;k++)

                {
                    cout<<ans[k]<<" "<<mp[ans[k]]<<endl;
                    ans[k].clear();
                }
                    mp.clear();
                    mapi.clear();
                    chinho.clear();
                    cnt=0;
                    i=0;
            }
            i++;
    }

    return 0;

}

