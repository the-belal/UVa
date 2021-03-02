#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,t,p,m,sum;
    double m1,m2;
    while (scanf("%d%d%d",&a,&b,&c)==3)
    {
        if (a==0 && b==0 && c==0)
            break;
        if ((b-a)==(c-b))
            printf("AP %d\n",c+c-b);
        if (a!=0 && b!=0 && c!=0)
        {
            m1=(double ) (b*1.0)/a*1.0;
            m2=(double ) (c*1.0)/b*1.0;
            if (m1==m2)
            {
                m1=m2*c;
                printf("GP %.0lf\n",m1);
            }
        }
    }
    return 0;
}
