#include<stdio.h>
int isPrime(int N) 
{
    for (int i = 2; i < N; i++) 
    {
        if (N % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    int N;
    printf("Enter a number:");
    scanf("%d",&N);

    if (isPrime(N)) 
    {
        printf("Prime number\n");
    }
    else 
    {
        printf("Not a prime number\n");
    }
    return 0;
}