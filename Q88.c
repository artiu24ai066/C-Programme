#include<stdio.h>
int main()
{
	int a[5],b[5],size,*aptr,*bptr,i;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	aptr=a;
	bptr=b;
	printf("Enter an array:");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("Array:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	for(i=0;i<5;i++)
	{
		*(bptr+i)=*(aptr+i);
	}
	printf("\nCopied array:");
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
}