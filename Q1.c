#include<stdio.h>
int main()
{
	double p,r,t;
	printf("Enter principal value:");
	scanf("%lf",&p);
	
	printf("Enter rate of interest in percent per annum:");
	scanf("%lf",&r);
	
	printf("Enter time in years:");
	scanf("%lf",&t);
	
	double simple_interest=(p*r*t)/100;
	printf("Calculated simple interest is:%lf", simple_interest);
	
	double total_amount=p+simple_interest;
	printf("Total amount is:%lf",total_amount);
	
	return 0;
}
