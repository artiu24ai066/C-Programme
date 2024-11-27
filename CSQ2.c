#include<stdio.h>
int main()
{
	int n,m,i,temp1,temp2,j,sum=0,avg;
	int arr[n],a[n],b[n],k[n];
	printf("Enter your n value");
	scanf("%d",&n);
	printf("Enter your m value");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	{
		printf("Enter your a[%d],b[%d],k[%d] value",i,i,i);
		scanf("%d%d%d",&a[i],&b[i],&k[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("a=%d\tb=%d\tc=%d\n",a[i],b[i],k[i]);
	}
	for(i=0;i<n;i++)
	{
		arr[i]=0;
	}
	for(i=0;i<m;i++)
	{
		temp1=a[i];
		temp2=b[i];
		for(j=temp1-1;j<temp2;j++)	
		{
			arr[j]=arr[j]+k[i];
		}
	}
	for(i=0;i<n;i++)
	{
		 printf("arr[%d]=%d\t",i,arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];	 
	}
	printf("average=%d",sum/n)
}