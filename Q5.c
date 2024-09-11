#include<stdio.h>
int main()
{
	int x,y;
	
	printf("X=");
	scanf("%d",&x);
	
	printf("Y=");
	scanf("%d",&y);
	
	int t=x;
	    x=y;
        y=t;
        
    printf("Values of x and y after swap=%d,%d",x,y);
 return 0;
	
}
