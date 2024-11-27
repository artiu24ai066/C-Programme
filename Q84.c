#include<stdio.h>
#include<conio.h>
struct books
{
    int pages;
	char bname[40];
	float price;
};
int main()
{
	struct books type[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n Enter the number of pages:");
		scanf("%d",&type[i].pages);
		printf("\n Enter the book name:");
		scanf("%s",&type[i].bname);
		printf("\n Enter price of the book:");
		scanf("%f",&type[i].price);
	}
	
	for(i=0;i<3;i++)
	{
			printf("\nPages=%d",type[i].pages);
			printf("\nBook name=%s",type[i].bname);
			printf("\nPrice=%f",type[i].price);
	}
}