#include<stdio.h>
int main()
{
    int n;
    printf("Enter the last number till which you want to print the odd numbers:");
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}