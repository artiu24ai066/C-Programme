#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);

    for(int i=0;i<=(2*n)-2;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}