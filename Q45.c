#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number,guess,nguesses=1;
	srand(time(0));
	number=rand()%100+1;
	
	do
	{	printf("Guess the number between 1 to 100\n");
		scanf("%d",&guess);
		
		if(guess>number)
		{
			printf("Lower number please\n");
		}
        else if(guess<number)
        {
        	printf("Greater number please\n");
        }
        else
		{
        	printf("Yayy!!! You got it right *-*\n You took %d attempts",nguesses);
        }
     nguesses++;
	} while(guess!=number);

return 0;
}
