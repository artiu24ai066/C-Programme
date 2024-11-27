#include <stdio.h>
int flip(int num, int n) 
{
    int temp = num;
    int divisor = 1;
    
    for (int i = 1; i <= n; i++) 
    {
        divisor *= 10;
    }
    
    int last_n_digits = temp % divisor;
    int remaining_digits = temp / divisor;
    int reversed_last_n_digits = 0;
    
    while (last_n_digits > 0) 
    {
        int digit = last_n_digits % 10;
        reversed_last_n_digits = reversed_last_n_digits * 10 + digit;
        last_n_digits /= 10;
    }
    return remaining_digits * divisor + reversed_last_n_digits;
}

int main() 
{
    printf("Flip(123, 2) = %d\n", flip(123, 2));
    printf("Flip(12345, 3) = %d\n", flip(12345, 3));
    return 0;
}
