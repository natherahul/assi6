#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+2*i;
    }
    printf("sum of first %d even natural number is %d",n,sum);
}