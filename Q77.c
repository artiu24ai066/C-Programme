#include<stdio.h>
int reversed(int n)
{
    int remainder,reverse=0;
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    return reverse;
}
int is_palindrome(int n)
{
    int reverse=reversed(n);
    if(n==reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    reversed(n);
    if(is_palindrome(n))
    {
        printf("Number is a palindrome");
    }
    else
    {
        printf("Number is not a palindrome");
    }
    return 0;
}   


