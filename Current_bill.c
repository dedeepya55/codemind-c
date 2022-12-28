#include<stdio.h>
int main()
{
int n;
float c,a,t,h;
scanf("%d",&n);
if(n<=199)
{
c=1.20;
}
else if(n>=200&&n<400)
{
c=1.50;
}
else if(n>=400&&n<600)
{
c=1.80;
}
else if(n>=600)
{
c=2.00;
}
a=n*c;
if(a>400)
{
t=0.15*a;
}
else
{
t=100;
}
h=a+t;
printf("%.2f",h);
}

  