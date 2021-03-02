#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,x2,x3,x4,a,b,c;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    a=abs(x1-x2);
    b=abs(x1-x3);
    c=abs(x1-x4);
    if(x1==x2 && x2==x3)
    {
        a=abs(x1-x4);
        b=a;
        c=a;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
