#include<stdio.h>
int main()
{
    int n;
    printf("Enter your array:");
    scanf("%d",&n);
    max(n);
}
int max(int n)
{
    int a[n],b,i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[1];
    for(i=1;i<=n;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        }
        else continue;
    }
    printf("Maximum number=%d",b);
    return 0;
}