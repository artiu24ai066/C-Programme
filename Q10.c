#include<stdio.h>
int main()
{
	float math,phy,chem,entrance_exam;
	printf("Enter math marks out of 200:");
	scanf("%f",&math);
	
	printf("Enter physics marks out of 200:");
	scanf("%f",&phy);
	
	printf("Enter chemistry marks out of 200:");
	scanf("%f",&chem);
	
	printf("Enter entrance exam marks out of 100:");
	scanf("%f",&entrance_exam);
	
	float cutoff_marks= (math/2)+(phy/2)+(chem/2)+entrance_exam;
	printf("Your cutoff marks is:%f",cutoff_marks);
return 0;
}
