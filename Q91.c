#include<stdio.h>
#include<math.h>
int main()
{
	int a,*aptr,square,cube;
	printf("Enter the value of a:");
	scanf("%d",&a);
	aptr=&a;
	square=pow(*aptr,2);
	cube=pow(*aptr,3);
	printf("Square=%d",square);
	printf("\nCube=%d",cube);
}