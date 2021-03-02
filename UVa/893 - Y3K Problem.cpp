#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,m,d,y,sum,years,leap,p,toal,days_ahead,rem;
    while (scanf("%lld%lld%lld%lld",&days_ahead,&d,&m,&y)==4)
    {
        if (days_ahead==0 && d==0 && m==0 && y==0)
            break;
        years=days_ahead/365;
        rem=days_ahead%365;
        leap=years/4;
        leap=leap-(years/100-years/400);
        cout<<leap<<endl;
        y=years+y;

        rem=leap-rem;
        if (leap>rem)
        {
            while (rem>27)
            {

                if (m==12)
                {
                    m--;
                    rem=-30;
                }
                else if (m==11)
                {
                    m--;
                    rem=-31;
                }
                else if (m==10)
                {
                    m--;
                    rem=-30;
                }
                else if (m==9)
                {
                    m--;
                    rem=-31;
                }
                else if (m==8)
                {
                    m--;
                    rem=-31;
                }
                else if (m==7)
                {
                    m--;
                    rem=-30;
                }
                else if (m==6)
                {
                    m--;
                    rem=-31;
                }
                else if (m==5)
                {
                    m--;
                    rem=-30;
                }
                else if (m==4)
                {
                    m--;
                    rem=-30;
                }
                else if (m==3)
                {
                    m--;
                    if (y%4==0)
                    {
                        if (y%100==0 && y%400!=0)
                        rem=-28;
                        else
                            rem=-29;
                    }
                        else
                    rem=-28;
                }
                else if (m==2)
                {
                    m--;
                    rem-=31;
                }
                else if (m==1)
                {
                    m=12;
                    y--;
                    rem-=31;
                }
            }
        }



    }
}
