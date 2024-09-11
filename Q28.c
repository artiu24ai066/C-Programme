#include<stdio.h>
int main()
{
    int n,q,temp,sum=0;
    printf("Enter number:");
    scanf("%d",&n);

    temp=n;
    while(n!=0)
    {
        q=n%10;
        sum=sum+(q*q*q);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Not an Armstrong number");
    }

    return 0;
}
