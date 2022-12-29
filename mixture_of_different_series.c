#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,k1=0,k2=0,h=0,b;
    scanf("%d",&n);
    printf("0 ");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            b=pow(2,k2);
            h=h+b;
            printf("%d ",h);
            k2++; 
        }
        else
        {
             a=pow(3,k1);
            printf("%d ",a-1);
            k1++;
            
            
            
            
        }
    }
}