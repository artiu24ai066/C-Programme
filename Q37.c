#include<stdio.h>
int main()
{
    int n;
    printf("Enter the last number till which you want to print the even numbers:");
    scanf("%d",&n);

    for(int i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}