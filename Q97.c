#include<stdio.h>
#include<string.h>
int main()
{
	char st[20],*aptr,i,count;
	printf("Enter the string:");
	aptr=st;
	gets(aptr);
	puts(aptr);
	while(*aptr!='\0')
	{
		switch(*aptr)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':	    
			case 'O':		
			case 'U':		
					count++;
		}
		aptr++;
	}
	printf("Total vowels=%d",count);
}