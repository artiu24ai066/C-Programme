#include<stdio.h>
#define BIGGEST(a, b) ((a > b) ? a : b)
int main() 
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Biggest number: %d\n", BIGGEST(num1, num2));
    return 0;
}