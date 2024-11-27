#include<stdio.h>
int main()
{
    int i,a[10],b[10];
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
    for(i=1;i<=10;i++)
    {
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    
    printf("Elements of array A after swap:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Elements of array B after swap:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n");
    return 0;
}
