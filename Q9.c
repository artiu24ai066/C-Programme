#include<stdio.h>
int main()
{
    int hours,minutes,seconds;
	printf("Time in hours:");
	scanf("%d",&hours);
	
	printf("Time in minutes:");
	scanf("%d",&minutes);
	
	printf("Time in seconds:");
	scanf("%d",&seconds);
	
	int total_seconds=seconds+(minutes*60)+(hours*60*60);
	printf("Total time in seconds is:%d",total_seconds);
	
}
