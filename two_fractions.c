//WAP to find the sum of two fractions.
#include<stdio.h>
struct fract
{
int num;
int deno;
};
typedef struct fract fraction;
fraction input()
{
fraction a;
printf("enter the numerator\n");
scanf("%d",&a.num);
printf("enter the denominator\n");
scanf("%d",&a.deno);
return a;
}
fraction sum(fraction a, fraction b)
{
fraction res;
if(a.deno=b.deno)
{
res.deno=a.deno;
res.num=a.num+b.num;
}
else
{
res.deno=a.deno*b.deno;
res.num=(a.num*b.deno)+(b.num*a.deno);
}
return res;
}
int main()
{
fraction a,b,c;
a=input();
b=input();
c=sum(a,b);
printf("the final sum is %d%dd",c.num,c.deno);
return 0;
}
