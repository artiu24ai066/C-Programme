#include<stdio.h>
#include<ctype.h>

int main() {
   char c;
   int lowercase_vowel, uppercase_vowel;
   printf("Enter an alphabet: ");
   scanf("%c", &c);

    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))      // isalpha() function is used to tell whether it is an alphabet or number
    {                                       // using #include<ctype.h>
        printf("Error! Non-alphabetic character.");
    }
    else if (lowercase_vowel || uppercase_vowel)
    {
        printf("%c is a vowel.", c);
    }
    else
    {
        printf("%c is a consonant.", c);
    }
   return 0;
}


#include<stdio.h>
char vowel(char c) 
{
    int lowercase, uppercase;

    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase || uppercase)
        return printf("It is a Vowel");
    else
        return printf("It is a consonant");
}

int main() 
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    vowel(c);

}