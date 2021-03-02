#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int tc,t,n,len,i,ans,sub,so,tar,sum;
    string st,s;
    scanf("%d",&tc);
    for (t=1; t<=tc; t++)
    {
        scanf("%d",&len);
        getchar();
        cin>>st>>s;
        sum=0;
        for (i=0; i<len; i++)

        {
            so=st[i]-'0';
            tar=s[i]-'0';
            ans=abs(so-tar);
            if (ans>5)
            {
                ans=so-0+10-tar;
                ans=min(ans,(10-so+tar-0));
            }
            sum+=ans;
        }
        printf("Case %d: %d\n",t,sum);
    }
    return 0;
}
