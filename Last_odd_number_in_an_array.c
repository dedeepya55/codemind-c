/* last odd number index position */
#include<stdio.h>
void fun(int n)
{
    int arr[n],x,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        x=arr[i];
    }
    printf("%d",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}