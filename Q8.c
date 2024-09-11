#include<stdio.h>
int main()
{
	int seconds=31558150;
	
	printf("\nRevolution of Earth in seconds is:%d",seconds);
	
	int minutes=seconds/60;
	printf("\nRevolution of Earth in minutes is:%d",minutes);
	
	int hours=minutes/60;
	printf("\nRevolution of Earth in hours is:%d",hours);
	
	int days=hours/24;
	printf("\nRevolution of Earth in days is:%d",days);
return 0;
}
