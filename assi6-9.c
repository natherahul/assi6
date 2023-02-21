#include<stdio.h>
int main()
{
    int i,j,n1,n2;
    printf("enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=25;i++)
    {
        for(j=1;j<=25;j++)
        {
            if(n1*i==n2*j)
            {
                printf("%d is lcm of %d and %d",n1*i,n1,n2);
                break;
            }
        }
        if(n1*i==n2*j)
            break;
    }
}