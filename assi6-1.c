#include<stdio.h>
int main()
{
    int sum=0,n,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d natural number is %d",n,sum);
}