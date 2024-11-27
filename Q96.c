#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *sname[10];
    int i, j;
    
    for (i = 0; i < 5; i++) 
    {
        sname[i] = (char *)malloc(20 * sizeof(char));
    }

    printf("Enter names of students:\n");
    for (i = 0; i < 5; i++) 
    {
        gets(sname[i]);
    }
    printf("Student names:\n");
    for (i = 0; i < 5; i++) 
    {
        puts(sname[i]);
    }

    char *temp;
    for (i = 0; i < 5; i++) 
    {
        for (j = i + 1; j < 5; j++) 
        {
            if (strcmp(sname[i], sname[j]) > 0) 
            {
                strcpy(temp, sname[i]);
                strcpy(sname[i], sname[j]);
                strcpy(sname[j], temp);
            }
        }
    }
    free(temp);
    printf("Sorted names:\n");
    for (i = 0; i < 5; i++) 
    {
        puts(sname[i]);
    }
    for (i = 0; i < 5; i++) 
    {
        free(sname[i]);
    }
    return 0;
}