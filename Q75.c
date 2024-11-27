#include<stdio.h>
int main()
{
    int roll_no[10],sub1[10],sub2[10],sub3[10],total[10],position,i;
    printf("Enter the roll numbers of students:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&roll_no[i]);
    }
    printf("Enter the marks of first subject of all the students:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&sub1[i]);
    }
    printf("Enter the marks of second subject of all the students:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&sub2[i]);
    }
    printf("Enter the marks of third subject of all the students:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&sub3[i]);
    }
    printf("Roll No.\t");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",roll_no[i]);
    }
    printf("\n");

    printf("Subject 1\t");
     for(int i=0;i<10;i++)
    {
        printf("%d\t",sub1[i]);
    }
    printf("\n");

    printf("Subject 2\t");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",sub2[i]);
    }
    printf("\n");

    printf("Subject 3\t");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",sub3[i]);
    }
    printf("\n");

    for(int i=0;i<10;i++)
    {
        total[i]=sub1[i]+sub2[i]+sub3[i];
        printf("\nTotal marks obtained by student %d=%d\n",i+1,total[i]);
    }

    int max=total[0];
    for(int i=1;i<=10;i++)
    {
        if(total[i]>max)
        {
            max=total[i];
            position=i;
        }
    }
    printf("\nThe highest total marks is %d scored by the student %d",max,position);
    max=sub1[0];
	for(i=0;i<10;i++)
	{
		if(sub1[i]>sub1[0])
		{
			max=sub1[i];
            position=i;
		}
		
	}
	printf("\nHighest marks in subject 1 is %d and the roll number of the student is %d",max,position);
	
	max=sub2[0];
	for(i=0;i<10;i++)
	{
		if(sub2[i]>sub2[1])
		{
			max=sub2[i];
            position=i;
		}
		
	}
	printf("\nHighest marks in subject 2 is %d and the roll number of the student is %d",max,position);
	max=sub3[1];
	for(i=1;i<=10;i++)
	
	{
		if(sub3[i]>sub3[1])
		{
			max=sub3[i];
            position=i;
		}
		
	}
	printf("\nHighest marks in subject 3 is %d and the roll number of the student is %d",max,position);
    
}

    


    
