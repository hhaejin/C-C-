#include <stdio.h>

int main()
{
    int num;

    while (1)
    {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number: \n");

        scanf("%d", &num);

        if (num == 1)
        {
            printf("You selected Input. \n");
        }
        else if (num == 2)
        {
            printf("You selected Output. \n");
        }
        else if (num == 3)
        {
            printf("You selected Delete. \n");
        }
        else if (num == 4)
        {
            printf("You selected Finish. \n");
            break;
        }
        else
        {
            printf("Wrong input.\n");
        }

        printf("\n");
    }

    return 0;
}