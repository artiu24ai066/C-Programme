#include<stdio.h>
int main()
{
    int t,q,temp,count=0,i;
    int n[t];
    printf("Enter number of cases:");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        printf("Enter value of n %d=\t",i);
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
		temp=n[i];
		while(n[i]!=0)
		{
			q=n[i]%10;
			if(temp%q==0)
			{
				count++;
			}
			n[i]=n[i]/10;
		}
		printf("Count%d=%d\n",i,count);
		count=0;
	}
}