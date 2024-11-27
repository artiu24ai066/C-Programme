#include<stdio.h>
int numbers(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nTwo numbers after swap are %d and %d",x,y);
}
int main()
{
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("Two numbers before swap are %d and %d",x,y);
    numbers(x,y);
}