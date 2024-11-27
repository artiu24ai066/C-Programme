#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        temp=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[temp])
            {
                temp=j;
            }
        }
        int b=a[temp];
        a[temp]=a[i];
        a[i]=b;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}