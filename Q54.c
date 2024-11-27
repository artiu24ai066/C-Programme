#include<stdio.h>
int main()
{
    int number[10],sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter any number:");
        scanf("%d",&number[i]);
        sum=sum+number[i];
    }
    printf("Sum=%d",sum);
    return 0;
}