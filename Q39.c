#include<stdio.h>
int main()
{
    int n,factorial=1,q=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        q=q+1;
        factorial=factorial*i;
        printf("%d/%d + ",q,factorial);
    }
    
    return 0;
}
