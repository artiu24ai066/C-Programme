#include<stdio.h>
int main()
{
    int n,prime=1;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    
    if(prime)
    {
        printf("Number is prime");
    }
   
    else
    {
        printf("Number is composite");
    }

    return 0;

}
