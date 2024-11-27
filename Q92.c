#include<stdio.h>
int main()
{
	int n,a[n],*aptr,i,max;
	max=*(aptr);
	aptr=a;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("\nArray:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(*(aptr)<*(aptr+i))
		*(aptr)=*(aptr+i);
	}
	printf("\nMaximum of the elements=%d",*aptr);
	
}