#include<stdio.h>
int main()
{
    int i,j,n,c,res=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
              c++;
            }
        }
        res+=c%2;
    }
    printf("%d",res);
}