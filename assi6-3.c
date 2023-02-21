#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+2*i-1;
    }
    printf("sum of first %d odd natural number is %d",n,sum);
}