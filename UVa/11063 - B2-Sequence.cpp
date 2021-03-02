#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[105],sum,i,j,n,p,t;
    t=1;
    while (scanf("%d",&n)==1)
    {
        map<int,int>mp;
        for (i=0;i<n;i++)
            scanf("%d",&a[i]);
            p=1;
            if (a[0]<1)
                p=0;
            for (i=1;i<n;i++)
            {
                if (a[i]<=a[i-1])
                {
                    p=0;
                    break;
                }

            }
            if (p==1)
            for (i=0;i<n;i++)
            {
                for (j=i;j<n;j++)
                {
                    sum=a[i]+a[j];
                    if (mp[sum]==0)
                        mp[sum]=1;
                    else
                    {
                        p=0;
                        break;
                    }
                }
                if (p==0)
                    break;
            }
            printf("Case #%d: ",t);
            t++;
            if (p==1)
                printf("It is a B2-Sequence.\n\n");
            else
                printf("It is not a B2-Sequence.\n\n");
    }
    return 0;
}

