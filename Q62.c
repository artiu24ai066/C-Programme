#include<stdio.h>
int main()
{
    int n,i,temp,j;
    printf("Enter number of elements of an array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse array:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;

}