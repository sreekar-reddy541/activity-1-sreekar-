//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
int input()
{
  int a;
  printf("enter first number:\n");
  scanf("%d",&a);
  return a;
}
int input1()
{
  int b;
  printf("enter second number:n");
  scanf("%d",&b);
  return b;
}
int find_sum(int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
}
  void output(int a, int b, int c)
  {
    printf("sum of %d%d is %d\n",a,b,c);
  }
  int main()
  {
    int x,y,z;
    x=input();
    y=input1();
    z=find_sum(x,y);
    output(x,y,z);
    return 0;
  }
