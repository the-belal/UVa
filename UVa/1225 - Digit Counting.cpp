#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,tc,cnt,n,m,rem;
    scanf("%d",&tc);
    while (tc--)
    {
        scanf("%d",&n);
        map<int,int>mp;
        for (i=1;i<=n;i++)
        {
            m=i;
            while (m!=0)
            {
                rem=m%10;
                m=m/10;

                mp[rem]++;
            }
        }
        for (i=0;i<9;i++)
            printf("%d ",mp[i]);
        printf("%d\n",mp[9]);
    }
    return 0;
}
