#include<stdio.h>
int even_odd(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    even_odd(n);
}
    
int even_odd(int n)
{
    if(n%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}
