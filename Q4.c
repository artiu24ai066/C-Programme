#include<stdio.h>
int main()
{
	int fahrenheit;
	printf("Enter temperature in fahrenheit:");
	scanf("%d",&fahrenheit);
	
	float celcius=(fahrenheit-32)*5.0/9.0;
	printf("The value of temperature in celcius is:%f", celcius);
	
	return 0;
}
