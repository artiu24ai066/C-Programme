#include<stdio.h>
int main()
{
    int fmax=0,smax=0;
    int n;
    while(n!=0)
    {
        printf("Enter any number=");
        scanf("%d",&n);
    
    if(n>fmax)
    {
        smax=fmax;
        fmax=n;
    }
    else if(n>smax)
    {
        smax=n;
    }
    }
    printf("First maximum number=%d",fmax);
    printf("Second maximum number=%d",smax);
    
    return 0;
 }