#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int h1,h2,m1,m2,h3,h4,m3,m4,p,s,tc,i,t;
    double ms,bs,me,be;
    char c,ch,sp;
    scanf("%d",&tc);
    for (t=1;t<=tc;t++)
    {
        scanf("%d%c%d%c%d%c%d",&h1,&c,&m1,&sp,&h2,&ch,&m2);
        scanf("%d%c%d%c%d%c%d",&h3,&c,&m3,&sp,&h4,&ch,&m4);
        bs=h1+(m1/100.0);
        be=h2+(m2/100.0);
        ms=h3+(m3/100.0);
        me=h4+(m4/100.0);
        p=1;
        if (ms>=bs && ms<=be)
            p=0;
        if (me>=bs && me<=be)
            p=0;
            if (bs>=ms && bs<=me)
                p=0;
            if (be>=ms && be<=me)
                p=0;

                printf("Case %d: ",t);
            if (p==1)
        printf("Hits Meeting\n");
        else
            printf("Mrs Meeting\n");
    }

return 0;
}
