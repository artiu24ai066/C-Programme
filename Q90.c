#include<stdio.h>
#include<string.h>
int main()
{
	char st[40];
	int *aptr,count=0,i,count1;
	
	printf("Enter the string:\n");
	gets(st);
	aptr=st;
	printf("\nString:");
	puts(aptr);
	count=strlen(st);
	printf("Including spaces count=%d\n",count);
	count1=count;
	while(st!='\0')
	{
		if((*aptr)==" ")
		count1--;
		i++;
	}
	printf("Excluding spaces count=%d\n",count1);
}