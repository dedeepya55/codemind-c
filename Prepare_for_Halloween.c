#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,f;
        scanf("%d%d",&a,&b);
        c=a*2;
        f=b*5;
        if(c>f)
        {
            printf("Chocolate
");
        }
        else if(c<f)
        {
            printf("Candy
");
        }
        else
        {
            printf("Either
");
        }
    }
}