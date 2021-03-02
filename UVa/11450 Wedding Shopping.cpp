#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long i,j,tc,sum,maxi,a[29][23],k[25],n,m,taka,mini,taken,t,lage;
    scanf("%lld",&tc);
    while (tc--)
    {
        scanf("%lld%lld",&taka,&n);
        for (i=0; i<n; i++)
        {
            scanf("%lld",&k[i]);
            for (j=0; j<k[i]; j++)
            {
                scanf("%lld",&a[i][j]);
            }
            sort(a[i],a[i]+k[i]);
        }
        mini=0;
        for (i=0; i<n; i++)
        {
            mini+=a[i][0];
        }
        if (mini>taka)
            printf("no solution\n");
        else if (mini==taka)
            printf("%lld\n",taka);
        else
        {
            maxi=mini;
            for (t=0; t<k[0]; t++)
            {
                lage=mini;
                sum=a[0][t];
                lage-=a[0][0];
                for (i=1; i<n; i++)
                {
                    lage-=a[i][0];
                    j=k[i]-1;
                    while ((lage+a[i][j]+sum)>taka)
                    {
                        j--;
                        if (j==-1)
                            break;
                    }
                    sum+=a[i][j];
                    if (j==-1)
                        break;

                }
                if (j!=-1 && sum<=taka)
                maxi=max(maxi,sum);

            }
            printf("%lld\n",maxi);
        }
    }
    return 0;
}
