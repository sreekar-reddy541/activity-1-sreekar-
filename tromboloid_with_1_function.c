//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{  
    float h,d,b,v;
    printf("\n enter the value of h:");
    scanf("%f",&h);
    printf("\n enter the value of d:");
    scanf("%f",&d);
    printf("\n enter the value of b:");
    scanf("%f",&b);
    v = (1.0/3.0) * ((h*d*b)+(d/b));
    printf("\n volume of tromboloid is : %f\n",v);
    return 0;
}

