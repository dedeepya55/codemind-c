#include<stdio.h>
int pal(int a)
{
    int rev=0,temp=a,r;
    while(temp>0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(rev==a)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int a,b=0,c=0,i,j,p1,p2;
    scanf("%d",&a);
    for(i=a+1;i<=100000l;i++)
    {
        if(pal(i)==1)
        {
            b=i-a;
            p1=i;
            break;
        }
    }
    for(j=a-1;j>0;j--)
    {
        if(pal(j)==1)
        {
            c=a-j;
            p2=j;
            break;
        }
    }
    if(b>c)
    {
        printf("%d",p2);
    }
    else if(b==c)
    {
        printf("%d %d",p2,p1);
    }
    else{
        printf("%d",p1);
    }
}