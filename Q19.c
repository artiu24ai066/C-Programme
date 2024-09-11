#include<stdio.h>
int main()
{  
	char c;
	printf("Enter a letter:");
	scanf("%c",&c);
	
(c>='A'&&c<='Z')?printf("It is capital letter"):(c>='a'&&c<='z')?printf("It is small letter"):printf("Others");
return 0;
}
