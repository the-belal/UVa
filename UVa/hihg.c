

//Pi-shape:
#include <stdio.h>
#include <math.h>
#include <graphics.h>
#include<winbgim.h>
#define pi 3.1415
int centerx,centery;
main ()
{
    double pi_shape (double x, double mu, double sigma);
    int xtrans (int x);
    int ytrans (int y);
    double sigma1=1.0, mu1=50.0,c,t;
    int gd=DETECT, gm;
    initgraph (&gd,&gm," ");
    centerx=getmaxx()/2;
    centery=getmaxy()/2;
// Drawing the axis
    moveto(centerx,centery);
    lineto(centerx,0);
    moveto(centerx,centery);
    lineto(getmaxx(),centery);
    for (c=0; c<100; c+=0.1)
    {
        t= pi_shape (c, mu1, sigma1);
        putpixel ( (int) xtrans(3*c), (int) ytrans(700*t),WHITE);
    }
// circle(200,200,100);
    getch();
    closegraph();
}
int xtrans (int x)
{
    return centerx+x;
}
int ytrans (int y)
{
    return centery-y;
}
double pi_shape (double x, double mu, double sigma)
{
    double y,t1,t2,t3,t4;
    t1=-(x-mu)*(x-mu);
    t2=2*pow(sigma,2);
    t3=exp(t1/t2);
    t4=2*pi*sqrt(sigma);
    y=t3/t4;
    return y;
}
