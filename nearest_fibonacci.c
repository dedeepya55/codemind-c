#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,num;
    scanf("%d",&num);
    while(num>c)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(num-a<b-num)
    {
        printf("%d",a);
    }
    else if(num-a==b-num)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("%d",b);
    }
    
}