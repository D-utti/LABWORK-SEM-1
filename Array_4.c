#include <stdio.h>
int main()
{
    //print min no of notes required; given: 1,2,5,10,20,50,100,200,500
    int a[9],n,i,t,s,u,v,w,x,y,z,r;
    printf("Payment required:");
    scanf("%d", &n);
    a[1]=1;
    a[2]=2;
    a[3]=5;
    a[4]=10;
    a[5]=20;
    a[6]=50;
    a[7]=100;
    a[8]=200;
    a[9]=500;

    t=n/500;
    s=t/200;
    u=s/100;
    v=u/50;
    w=v/20;
    x=w/10;
    y=x/5;
    z=y/2;
    r=z/1;

    for(i=1;i<=9;i++)
    {

    }
}

