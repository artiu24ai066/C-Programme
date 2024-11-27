#include<stdio.h>
int main()
{
    int r,c;
    printf("Number of rows=");
    scanf("%d",&r);
    printf("Number of columns=");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("Enter the elements of a matrix:\n");   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:\n");  
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is:\n");  
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}