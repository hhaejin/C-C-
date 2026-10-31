#include <stdio.h>

int main()
{
    int a, b;
    int temp;
    int sum = 0;
    int count = 0;
    double avg;

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
            count++;
        }
    }

    avg = (double)sum / count;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}