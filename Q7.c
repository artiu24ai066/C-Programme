#include<stdio.h>
int main()
{
	float base,height;
	printf("Enter base of the triangle:");
	scanf("%f",&base);
	
	printf("Enter height of the triangle:");
	scanf("%f",&height);
	
	float area=(base*height)/2;
	printf("The area of the triangle is:%f",area);
return 0;
}
