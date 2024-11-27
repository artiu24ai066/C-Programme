#include<stdio.h>
int main()
{
    int number[10],positive=0,negative=0,zero=0;
    printf("Enter any number:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(number[i]>0)
        {
            positive++;
        }
        else if(number[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
        
    }
        printf("Positive numbers=%d",positive);
        printf("\nNegative numbers=%d",negative);
        printf("\nNumber of zeroes=%d",zero);
     return 0;
}
