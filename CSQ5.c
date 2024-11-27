#include<stdio.h>
int main()
{
    int n,t1,t2,t,i;
    t=1;
    int a[n];
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter your number:");
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        while(t<a[i])
        {
            t1=t2;
            t2=t;
            t=t1+t2;
        }
        if(t==a[i])
        {
            printf("IsFibo");    
        }

        else
        {   
            printf("IsnotFibo");
        }
        t1=0,t2=1,t;
        t=t1+t2;
        printf("\n");
    }
}
