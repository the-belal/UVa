#include<stdio.h>
#include<string.h>
int main ()
{
    int len,n,i,j,p,in;
    char st[100];
    j=1;
    while (scanf("%s",st)!=EOF)
    {
        p=0;

        i=0;
        len=strlen(st);
        printf("%4d.",j);
        for (i=0; i<len; i++)
        {
            if (st[i]=='0')
            {
                len--;
            }
            else
            {
                p=1;
                break;
            }

        }
        if (p==0)
            printf(" 0");
        p=0;
        if (len==1)
        {
            printf(" %c",st[0]);
            p=1;
        }
        if (len==16)
        {
            if (st[i]=='0'&& st[i+1]!='0')
                printf(" %c kuti",st[i+1]);
            else if (st[i+1]!='0')
                printf(" %c%c kuti",st[i],st[i+1]);
            else if (st[i]!='0')
                printf(" %c%c kuti",st[i],st[i+1]);
            i+=2;
            len=len-2;
        }
        if (len==15)
        {
            if (st[i]!='0')
                printf(" %c kuti",st[i]);
            len--;
            i++;
        }
        if (len==14)
        {

            if (st[i]=='0'&& st[i+1]!='0')
                printf(" %c lakh",st[i+1]);
            else if (st[i+1]!='0')
                printf(" %c%c lakh",st[i],st[i+1]);
            else if (st[i]!='0')
                printf(" %c%c lakh",st[i],st[i+1]);
            i+=2;
            len=len-2;
        }
        if (len==13)
        {
            if (st[i]!='0')
                printf(" %c lakh",st[i]);
            i++;
            len--;
        }
        if (len==12)
        {
            if (st[i]=='0'&& st[i+1]!='0')
                printf(" %c hajar",st[i+1]);
            else if (st[i+1]!='0')
                printf(" %c%c hajar",st[i],st[i+1]);
            else if (st[i]!='0')
                printf(" %c%c hajar",st[i],st[i+1]);
            len-=2;
            i+=2;
        }
        if (len==11)
        {
            if (st[i]!='0')
                printf(" %c hajar",st[i]);
            len--;
            i+=1;
        }
        if (len==10)
        {
            if (st[i]!='0')
                printf(" %c shata",st[i]);
            len--;
            i+=1;
        }
        if (len==9)
        {
            if (st[i]=='0'&& st[i+1]!='0')
                printf(" %c kuti",st[i+1]);
            else if (st[i+1]!='0')
                printf(" %c%c kuti",st[i],st[i+1]);
            else if (st[i]!='0')
                printf(" %c%c kuti",st[i],st[i+1]);
            else printf(" kuti");

            len-=2;
            i+=2;
        }
        if (len==8)
        {
            if (st[i]!='0')
                printf(" %c kuti",st[i]);
            i+=1;
            len--;
        }
        if (len==7)
        {
            if (st[i]=='0'&& st[i+1]!='0')
                printf(" %c lakh",st[i+1]);
            else if (st[i+1]!='0')
                printf(" %c%c lakh",st[i],st[i+1]);
            else if (st[i]!='0')
                printf(" %c%c lakh",st[i],st[i+1]);
            len=len-2;
            i+=2;
        }
        if (len==6)
        {
            if (st[i]!='0')
                printf(" %c lakh",st[i]);
            len--;
            i+=1;
        }
        if (len==5)
        {
            if (st[i]=='0'&& st[i+1]!='0')
                printf(" %c hajar",st[i+1]);
            else if (st[i+1]!='0')
                printf(" %c%c hajar",st[i],st[i+1]);
            else if (st[i]!='0')
                printf(" %c%c hajar",st[i],st[i+1]);
            len-=2;
            i+=2;
        }
        if (len==4)
        {
            if (st[i]!='0')
                printf(" %c hajar",st[i++]);
            len--;
        }
        if (len==3)
        {
            if (st[i]!='0')
                printf(" %c shata",st[i]);
            len--;
            i++;
        }

        if (len==2)
        {
            if (st[i]=='0'&& st[i+1]!='0')
                printf(" %c",st[i+1]);
            else if (st[i+1]!='0')
                printf(" %c%c",st[i],st[i+1]);
            else if (st[i]!='0')
                printf(" %c%c",st[i],st[i+1]);
            len-=2;
            i+=2;

        }
        if (len==1 && p==0)
        {
            if (st[i]!='0')
                printf(" %c",st[i]);

        }
        printf("\n");
        j++;
    }
    return 0;
}
