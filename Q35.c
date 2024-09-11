#include<stdio.h>
int main()
{ int n,sum=0,remainder;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n/10!=0)
    {
        sum=0;
        while(n!=0)
        {
            remainder=n%10;
            sum=sum+remainder;
            n=n/10;
        }
    n=sum;
    }
 printf("\nSum of individual digits=%d",sum);
 return 0;
}
