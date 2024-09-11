#include<stdio.h>
int main()
{
	float num1,num2;
	char op;
	
	printf("First number:");
	scanf("%f",&num1);
	
	printf("Operator:");
	scanf("%c",&op);
	
	printf("Second number");
	scanf("%f",&num2);
	
	switch(op)
	{
		case'+':
		printf("%f",num1+num2);
		break;
		
		case'-':
		printf("%f",num1-num2);
		break;
		
		case'*':
		printf("%f",num1*num2);
		break;
		
		case'/':
		printf("%f",num1/num2);
		break;
		
		default:
		printf("Operator not valid");
		
		
	}
return 0;
}