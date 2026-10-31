#include <stdio.h>

int main()
{
    int menu;

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");

    scanf("%d", &menu);

    switch (menu)
    {
        case 1:
            printf("You selected ADD.");
            break;

        case 2:
            printf("You selected EDIT.");
            break;

        case 3:
            printf("You selected DEL.");
            break;

        default:
            printf("Wrong choice.");
            break;
    }

    return 0;
}