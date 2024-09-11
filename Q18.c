#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	
	printf("Enter value of b:");
	scanf("%d",&b);
	
	printf("Enter value of c:");
	scanf("%d",&c);
	
(a>b && a>c)? printf("a is greatest"):(b>a && b>c)? printf("b is greatest"):printf("c is greatest");
	
	return 0;
	
}
