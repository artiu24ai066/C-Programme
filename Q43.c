#include<stdio.h>
int main()
{
    int amount,sales,commission;
    printf("Enter sales:");
    scanf("%d",&sales);

    printf("Enter amount:");
    scanf("%d",&amount);

    if(sales<=500)
    {
        commission=0.05*amount;
        printf("Commission=%d",commission);
    }
    else if(sales>500 && sales<=2000)
    {
        commission=35+(0.1*(amount-500));
        printf("Commission=%d",commission);
    }
    else if(sales>2000 && sales<=5000)
    {
        commission=185+(0.12*(amount-2000));
        printf("Commission=%d",commission);
    }
    else
    {
        commission=12.5*(amount-5000);
        printf("Commission=%d",commission);
    }
    return 0;
}