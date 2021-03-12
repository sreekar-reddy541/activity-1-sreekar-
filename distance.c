//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>
int input_a()
{
float a;
scanf("%f",&a);
return a;
}
int input_b()
{
float b;
scanf("%f",&b);
return b;
}
void print (float dist)
{
printf("distance = %f\n",dist);
}
float calc(float a1, float b1, float a2,float b2)
{
return (sqrt(( (a2-a1)*(a2-a1) )+( (b2-b1)*(b2-b1) )));
}
int main()
{ 
float a1, b1, a2, b2;
printf("input a1:");
a1=input_a();
printf("input b1:");
b1=input_b();
print("input a2:");
a2=input_a();
printf("input b2:");
b2=input_b();
float dist = calc(a1,b1,a2,b2);
print(dist);
return 0;
}
