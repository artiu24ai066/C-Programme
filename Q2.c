#include<stdio.h>
int main()
{
    float math,phy,chem,sanskrit,english;
	printf("Enter Math marks out of 100:");
	scanf("%f",&math);
	
	printf("Enter Physics marks out of 100:");
	scanf("%f",&phy);
	
	printf("Enter Chemistry marks out of 100:");
	scanf("%f",&chem);
	
	printf("Enter Sanskrit marks out of 100:");
	scanf("%f",&sanskrit);
	
	printf("Enter English marks out of 100:");
	scanf("%f",&english);
	
	float total=math+phy+chem+sanskrit+english;
	printf("Your total score out of 500 is:%f", total);
	
	float percentage=(math+phy+chem+sanskrit+english)/5;
	printf("Your percentage is %f", percentage);
	
    return 0;
}
