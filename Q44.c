#include<stdio.h>
int main()
{
    int units,rate,amount;
    printf("Number of units used:");
    scanf("%d",&units);

    if(units<=200)
    {
        amount=0.5*units;
        printf("Amount to be paid=%d",amount);
    }
    else if(units>200 && units<=400)
    {
        amount=100+(0.65*(units-200));
        printf("Amount to be paid=%d",amount);
    }
    else if(units>400 && units<=600)
    {
        amount=230+(0.8*(units-400));
        printf("Amount to be paid=%d",amount);
    }
    else
    {
        amount=425+(1.25*(units-600));
        printf("Amount to be paid=%d",amount);
    }
    return 0;
}