#include<stdio.h>
int main()
{
    int arr[3][3],min,max;
    printf("Enter elements of a 3x3 matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    min=max=arr[0][0];          
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("Maximum value is %d\n",max);
    printf("Minimum value is %d\n",min);
    return 0;
}