//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
int height(int h);
int depth(int d);
int breadth(int b);
int volume(int h, int d, int b);
int main()
{
int h,d,b,v;
h=height(h);
d=depth(d);
b=breadth(b);
v=volume(h,b,d);
printf("volume: %d",v);
}
int height(int h)
{
printf("enter the value of height:\n");
scanf("%d",&h);
return h;
}
int depth(int d)
{
printf("enter the value of depth:\n");
scanf("%d",&d);
return d;
}
int breadth(int b)
{
printf("enter the value of breadth: &b);
return b;
}
int volume(int h, int d, int b)
{
int v;
v=((h*d*b)+d/b)/3;
return v;
}

