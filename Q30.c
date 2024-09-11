#include<stdio.h>
int main()
{
    int n,remainder,reverse;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        remainder=n%10;
        reverse=(reverse*10)+remainder;
        n=n/10;
    }
    printf("Reversed number is %d",reverse);
    return 0;
}
