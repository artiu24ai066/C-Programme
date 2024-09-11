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
	
	if(total>450)
	{
		printf("\nYour grade is A");
	}
	else if(total>400)
	{
		printf("\nYour grade is B");
	}
	else if(total>300)
	{
		printf("\nYour grade is C");
	}
	else if(total>200)
	{
		printf("\nYour grade is D");
	}
	else
	{
		printf("\nBetter luck next time :(  :( ");
	}
	
	return 0;
}
