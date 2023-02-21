#include<stdio.h>
int main()
{
    int num,i,n;
    printf("enter the number:");
    scanf("%d",&num);
    n=num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i==n)
        printf("%d is prime number",num);
    else
        printf("%d  is not prime number",num);
}