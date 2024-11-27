#include<stdio.h>
int main()
{
    int n,element,i,index,temp=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(element==a[i])
        {
            printf("Element found");
            index=i;
            temp++;
        }
        else
        {
            continue;
        }
    }
        if(temp==0)
        {
            printf("Entered element is not present in the array");
        }
        printf("Element is found at index %d",index);
    
    return 0;
}