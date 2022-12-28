#include<stdio.h>
int main()
{
    int a,b;
    float q,w;
    scanf("%d%d%f%f",&a,&b,&q,&w);
    printf("%d %d
%.1f %.1f ",a+b,a-b,q+w,q-w);
}