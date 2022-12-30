#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,h,a,b,s=0;
        scanf("%d",&n);
        m=log10(n)+1;
        h=pow(10,m-1);
        a=n%10;
        b=n/h;
        s=a+b;
        printf("%d
",s);
    }
}