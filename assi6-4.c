#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("sum of square of first %d natural number is %d",n,sum);
}