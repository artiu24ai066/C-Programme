#include<stdio.h>
int main()
{
    int i,a[10],b[10],sum[10];
    printf("Elements of array A:\n");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array B:\n");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Sum of elements of both the arrays:\n");
    for(i=1;i<=10;i++)
    {
        sum[i]=a[i]+b[i];
        printf("%d\t",sum[i]);
    }
    return 0;
}