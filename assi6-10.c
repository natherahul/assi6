#include<stdio.h>
int main()
{
    int num,rem,n=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        n=n*10+rem;
        num=num/10;
    }
    printf("the reverse number is %d",n);
}