#include<stdio.h>
int main()
{
    int c=0,num,i;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        c++;
    }
    printf("digits in the number is %d",c);
}