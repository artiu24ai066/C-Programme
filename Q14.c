#include<stdio.h>                
int main()                                                                                         
{                                                                                                          
char character;                                                                                
printf("enter character :");                                                                                                                                         
scanf("%c",&character);                                                                                                                          
if(character>='A' && character<='Z')
    {                                        
      printf("Upper case\n");                                                         
    }                                                                                                                                                                 
else if(character>='a' && character<='z')
    {                                  
      printf("Lower case\n");                                                           
    }                                                                                                
else
    {                                                                                                 
      printf("Special symbol\n");                                                  
    }                                                                                                       
return 0;                                    
} 
