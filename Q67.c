#include<stdio.h>
int main()
{
    int r,c;
    printf("Number of rows=");
    scanf("%d",&r);
    printf("Number of columns=");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("Enter the elements of matrix A:\n");    // Enter matrix A
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int brr[r][c];
    printf("Enter the elements of matrix B:\n");    //  Enter matrix B
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }

    printf("The matrix A is:\n");   // Print matrix A
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("The matrix B is:\n");   // Print matrix B
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",brr[i][j]);
        }
        printf("\n");
    }
    
    int difference[r][c];              // Initialize difference of both matrices
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            difference[i][j]=arr[i][j]+brr[i][j];
        }
        printf("\n");
    }
    
    printf("The difference of matrix A and B is:\n");  // Print difference
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",difference[i][j]);
        }
        printf("\n");
    }
    return 0;
}