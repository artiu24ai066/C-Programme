#include<stdio.h>
#include<string.h>
int main()
{
	char st[20],*aptr;
	int count=0,i;
	aptr=st;
	printf("Enter the string:");
	gets(aptr);
	puts(aptr);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]==' ')
		count++;
	}
	printf("Total words=%d",count+1);
}