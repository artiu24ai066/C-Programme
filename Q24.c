#include<stdio.h>
#include<math.h>

int main()
{
    double n,x,y,a;
    printf("Enter value of n:");
    scanf("%lf",&n);

    printf("Enter value of x:");
    scanf("%lf",&x);

    if(n==1)
    {
        printf("Value of y=%lf", 1+x);
    }

    else if(n==2)
    {
        printf("Value of y=%lf", 1+(x/n));
    }

    else if(n==3)
    {
        a=pow(x,3);
        printf("Value of y=%lf", a);
    }

    else
    {
        printf("Value of y=%lf", 1+n*x);
    }

    return 0;
}
