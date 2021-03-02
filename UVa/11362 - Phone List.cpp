#include<bits/stdc++.h>
using namespace std;
int  main ()
{
    int len,i,j,cnt,p,n,tc;
    string st[10005];
    char s[1000];
    scanf("%d",&tc);
    while (tc--)
    {
        map<string, int>mp;
        scanf("%d",&n);
        getchar();
        for (i=0;i<n;i++)
        {
            cin>>st[i];

            mp[st[i]]=i+1;
        }
        p=1;
        for (i=0;i<n;i++)
        {
            len=st[i].size();
            for (j=0;j<len;j++)
            {
                s[j]=st[i][j];
                s[j+1]='\0';
                //cout<<j<<" "<<s<<endl;
                if (mp[s]!=0 && mp[s]!=i+1)
                    {
                        p=0;
                        break;
                    }
            }

            if (p==0)
                break;
        }
        if (p==1)
            printf("YES\n");
        else if (p==0)
            printf("NO\n");
    }
    return 0;
}
