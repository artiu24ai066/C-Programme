#include<stdio.h>
int main()
{
    int n,original,remainder,reversed=0;
    printf("Enter a number:");
    scanf("%d",&n);

    original=n;
    while(n!=0)
    {
        remainder=n%10;
        reversed=(reversed*10)+remainder;
        n=n/10;
    }
    if(original==reversed)
    {
        printf("Number is a palindrome");
    }
    else
    {
        printf("Number is not a palindrome");
    }

    return 0;
}