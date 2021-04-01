//WAP to find the sum of n complex numbers using structures and 4 or more functions.
#include<stdio.h>
int main()
{
int n,a[100],sum=0;
printf("enter the total number\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter a new number\n");
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("the final sum is %d\n",sum);
return 0;
}
