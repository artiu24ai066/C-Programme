#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("\n%d",i*i);
    }
    return 0;
}
