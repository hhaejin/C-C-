#include <stdio.h>

int main()
{
    char grade;

    scanf(" %c", &grade);

    switch (grade)
    {
        case 'A':
            printf("Excellent");
            break;

        case 'B':
            printf("Good");
            break;

        case 'C':
            printf("Usually");
            break;

        default:
            printf("error");
    }

    return 0;
}