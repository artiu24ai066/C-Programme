#include<stdio.h>
int main()
{
    int number[10],even=0,odd=0;
    printf("Enter any number:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(number[i]%2==0)
            {
                even++;
            }
        else
            {
                odd++;
            }
    }
        printf("Even numbers=%d,",even);
        printf("Odd numbers=%d,",odd);
     return 0;
}
