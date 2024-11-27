#include <stdio.h>
int main() 
{
    char str1[100], str2[100], str3[100];
    int i,j;

    // Copy one string into another
    printf("Enter a string: ");
    scanf("%s", str1);
    i = 0;
    while (str1[i] != '\0') 
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("Copied string: %s\n", str2);

    
    // Compare two strings
    printf("Enter another string: ");
    scanf("%s", str3);
    i = 0;
    while (str1[i] == str3[i] && str1[i] != '\0') 
    {
        i++;
    }
    if (str1[i] == '\0' && str3[i] == '\0') 
    {
        printf("Strings are equal\n");
    } 
    else 
    {
        printf("Strings are not equal\n");
    }

    
    // Concatenate two strings
    i = 0,j=0;
    while (str1[i] != '\0') 
    {
        str3[i]=str1[i];
        i++;
    }
    str3[i++]=' ';
    while (str2[j] != '\0') 
    {
        str3[i] = str2[j];
        i++;
        j++;
    }
    printf("Concatenated string: %s\n", str1);

    // Reverse a given string
    i = 0;
    while (str1[i] != '\0') 
    {
        i++;
    }
    i--;
    j = 0;
    while (j < i) {
        char temp = str1[j];
        str1[j] = str1[i];
        str1[i] = temp;
        j++;
        i--;
    }
    printf("Reversed string: %s\n", str1);

    return 0;
}
