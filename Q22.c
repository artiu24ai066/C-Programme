#include<stdio.h>
int main()
{
	int factorial=1;
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		factorial*=i;
	}
  printf("Value of factorial=%d",factorial);
  return 0;
	
}
