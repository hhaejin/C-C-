#include <stdio.h>

int main()
{
    int arr[100];
    int i = 0;

    while (i < 100)
    {
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
        {
            break;
        }

        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}