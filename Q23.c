#include<stdio.h>
int main()
{
   int x,base,power;
   printf("Enter base:");
   printf("\nEnter power:");
   scanf("%d",&base);
   scanf("%d",&power);

  
   x=1;
   for(int i=1;i<=power;i++)
    {
        x=x*base;

    }
printf("%d",x);

}