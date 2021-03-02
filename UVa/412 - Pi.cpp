#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,n,a[100],t,cnt,j;
    double p;
    while (scanf("%d",&n)==1)
    {
        cnt=0;
        if (n==0)
            break;
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        t=((n-1)*n)/2;
        for (i=0;i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (__gcd(a[i],a[j])==1)
                    cnt++;
            }
        }
        if (cnt==0)
            printf("No estimate for this data set.\n");
        else
        {
            p=(double) ((6.0*t)*1.0)/(cnt*1.0);
        p=sqrt(p);
        printf("%.6lf\n",p);
        }
    }
    return 0;
}
