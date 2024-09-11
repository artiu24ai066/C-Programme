#include<stdio.h>
int main()
{
	float salary,house_rent,travel_allowance;
	
	printf("Enter your Salary:");
	scanf("%f", &salary);

    printf("House rent:");
	scanf("%f", &house_rent);
	
	printf("Travel allowance:");
	scanf("%f", &travel_allowance);
	
	float gross_salary=salary+house_rent+travel_allowance;
	printf("Your gross salary is:%f",gross_salary);
	return 0;

}
