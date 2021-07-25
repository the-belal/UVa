#include<bits/stdc++.h>
using namespace std;
struct sl{
    int x,y;
};
bool cmp(sl i,sl j)
{
    return i.x<j.x;
}
int main ()
{
    sl a[100005];
    int i,j,n,m,k,cnt,tc,temp,ans,maxi;
    scanf("%d",&tc);
    while (tc--)
    {

        scanf("%d%d",&n,&m);
        for (i=0;i<m;i++)
        {
            scanf("%d%d",&a[i].x,&a[i].y);
            if (a[i].x>a[i].y)
            {
                temp=a[i].x;
                a[i].x=a[i].y;
                a[i].y=temp;
            }

        }
        sort (a,a+m,cmp);
        cnt=1;
        if (a[0].x!=1)
        cnt=a[0].x-1;
        maxi=0;
        maxi=a[0].y;

        for (i=1;i<m;i++)
        {
            maxi=max(maxi,a[i-1].y);
            ans=a[i].x-maxi;
            if (ans>0)
                cnt+=ans;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
