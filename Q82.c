#include<stdio.h>
int factorial(int n)
{
        if(n==0)
        {
            return 1;
        }
        int factorial=1;
        for(int i=1;i<=n;i++)
	    {
		    factorial*=i;
	    }
        return factorial;
}

int main()
{
	int n,r,nCr;
	printf("Enter value of n:");
	scanf("%d",&n);
    printf("Enter value of r:");
	scanf("%d",&r);
    nCr=factorial(n) / (factorial(r) * factorial(n-r));
    printf("The value of %dC%d is %d",n,r,nCr);
}
