#include <stdio.h>
int main() 
{
    int var = 10; 
    int *ptr = &var;

    printf("Initial value of var: %d\n", var);
    *ptr = 20;
    printf("Value of var after modification: %d\n", var);
    return 0;
}