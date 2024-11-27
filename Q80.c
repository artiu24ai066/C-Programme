#include<stdio.h>
int fib(int n, int t1, int t2) 
{
    if(n<3)
    {
        return 0;
    }
    int next_term = t1 + t2;
    t2 = t1;
    t1 = next_term;
    printf("%d ", next_term);
    return fib(n-1, t1, t2);
}

int printFib(int n) {
  
    if (n < 1) 
    {
        printf("Invalid number of terms\n");
    }
    
    else if (n == 1) 
    {
        printf("%d ", 0);
    }
    
    else if (n == 2) 
    {
        printf("%d %d", 0, 1);
    }

    else 
    {
        printf("%d %d ", 0, 1);
        fib(n,0,1);
    }
    return 0;
}

int main() {
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printFib(n);
    return 0;
}