#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j,pos,swap,min,temp;
	printf("Enter elements of array A:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nValue of array A:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(a[pos]>a[j])
			pos=j;
		}
		    
		    swap=a[i];
		    a[i]=a[pos];
	        a[pos]=swap;
			
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}


	printf("\nEnter elements of array B");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nValue of array B:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
	
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(b[pos]>b[j])
			pos=j;
		}
		
	        swap=b[i];
	        b[i]=b[pos];
		    b[pos]=swap;
			
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
	
	
	
	printf("Array C:\n");
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<5;i++)
	{
		c[i+5]=b[i];
	}
	
	printf("the merged array");
	for(i=0;i<10;i++)
	{
		printf("%d",c[i]);
	}
	printf("Array after sorting");
    for(i=0;i<10;i++)
	{
		pos=i;
		for(j=i+1;j<10;j++)
		{
			if(c[pos]>c[j])
			pos=j;
		}
	        swap=c[i];
	        c[i]=c[pos];
		    c[pos]=swap;
			
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",c[i]);
	}
	
}