#include<stdio.h>
int main()
{
    int n,odd_sum=0,even_sum=0;

    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even_sum=even_sum+i;
        }
        else
        {
            odd_sum=odd_sum+i;
        }
    }
    printf("Sum of odd numbers:%d",odd_sum);
    printf("\nSum of even numbers:%d",even_sum);
    
    return 0;
}