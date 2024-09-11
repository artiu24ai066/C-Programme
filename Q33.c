#include<stdio.h>
int main()
{
    int max=0,min=0,n;
    while(n!=0)
    {
        printf("Enter any number:");
        scanf("%d",&n);

        if(n>max)
        {
            max=n;
        }
        if(n<min)
        {
            min=n;
        }
    }
    printf("Maximum number=%d",max);
    printf("Minimum number=%d",min);
    return 0;

}