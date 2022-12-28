#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i=0,j,a[n],q,c=0,r;
    scanf("%d",&n);
    m=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        a[i]=r;
        i++;
        q=q/10;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
    }
if(c==0)
    printf("Unique Number");
else
    printf("Not Unique Number");
}