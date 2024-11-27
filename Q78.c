#include<stdio.h>
int armstrong_num(int n)
{
    int r,armstrong=0;
    while(n!=0)
    {
        r=n%10;
        armstrong=armstrong+r*r*r;
        n=n/10;
    }
    return armstrong;
}
int is_armstrong(int n)
{
    int armstrong=armstrong_num(n);
    if(n==armstrong)
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
    armstrong_num(n);
    if(is_armstrong(n))
    {
        printf("Number is an armstrong");
    }
    else
    {
        printf("Number is not an armstrong");
    }
    return 0;
}   


