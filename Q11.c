#include<stdio.h>
int main()
{
    int total_seconds;
	printf("Enter time in seconds:");
	scanf("%d",&total_seconds);

    int h,m,s;
    h=(total_seconds)/3600;
    m=(total_seconds-(h*3600))/60;
    s=(total_seconds-(h*3600)-(m*60));
    
    printf("Hours:%d",h);
    printf("\nMinutes:%d",m);
    printf("\nSeconds:%d",s);
return 0;    
}
