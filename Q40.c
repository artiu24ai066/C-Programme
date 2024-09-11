#include<stdio.h>
int main()
{
    int n,sum=0;
    while(n>0)
    {
        printf("Enter any number:");
        scanf("%d",&n);
        
            sum=sum+n;
        
    }
    printf("Sum=%d",sum);
    return 0;
}