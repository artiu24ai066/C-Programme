#include<stdio.h>
int main()
{
    int r,c,p,q;
    printf("Number of rows of matrix A=");
    scanf("%d",&r);
    printf("Number of columns of matrix A=");
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
    
    printf("Number of rows of matrix B=");
    scanf("%d",&p);
    printf("Number of columns of matrix B=");
    scanf("%d",&q);
    
    int brr[p][q];
    printf("Enter the elements of matrix B:\n");    //  Enter matrix B
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
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
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",brr[i][j]);
        }
        printf("\n");
    }

    if(c!=p)
    {
        printf("Matrices cannot be multiplied");
    }
    
    int result[r][q];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<q;j++)
        {
            result[i][j]=0;
            for(int k=0;k<c;k++)
            {
                result[i][j]=result[i][j]+(arr[i][k]*brr[k][j]);
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<q;j++)
        {
           printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}