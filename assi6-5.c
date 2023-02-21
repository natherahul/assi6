#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("sum of cubes of first %d natural number is %d",n,sum);
}