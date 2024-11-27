#include <stdio.h>
#include <string.h>

struct Employee {
    int empNo;
    char empName[50];
    float basicPay;
};

int main() 
{
    int n, i;
    struct Employee employ[50], *empPtr;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    if (n > 50) 
    {
        printf("Maximum number of employess is only 50!!!");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter employee number: ");
        scanf("%d", &employ[i].empNo);

        printf("Enter employee name: ");
        scanf("%s", employ[i].empName);

        printf("Enter basic pay: ");
        scanf("%f", &employ[i].basicPay);
    }
    empPtr = employ;
    printf("\nEmployee List:\n");
    for (i = 0; i < n; i++) {
        printf("Employee Number: %d\n", empPtr->empNo);
        printf("Employee Name: %s\n", empPtr->empName);
        printf("Basic Pay: %.2f\n\n", empPtr->basicPay);
        empPtr++;
    }
    return 0;
}