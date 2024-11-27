#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c;
    printf("Enter the elements of the matrix:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        c=0;
        for(int j=0;j<3;j++)
        {
            c=c+a[i][j];
        }
        printf("Sum of row %d is %d",i+1,c);
    }
}