#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],c[100],i,j,k=0;
    char *b= &a,*d=&c;
    printf("Enter your string:");
    scanf("%[^\n]s",&a);
    while(*(b+k) !='\0')
    {
     	k++;
    }
    for(i=0,j=k-1;i<k&&j>=0;i++,j--)
    {
        *(d+j)=*(b+i);
    }
    puts(c);     
    return 0;
}