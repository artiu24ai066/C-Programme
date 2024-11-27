#include<stdio.h>
#include<string.h>
void permute(char *str, int i, int length) 
{
    if (i == length) 
    {
        printf("%s\n", str);
    } 
    else 
    {
        for (int j = i; j < length; j++) 
        {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            permute(str, i + 1, length);
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }
}
int main() 
{
    char str[] = "ABCD";
    int length = strlen(str);
    permute(str, 0, length);
    return 0;
}
