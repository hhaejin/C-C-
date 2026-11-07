#include <stdio.h>

int main()
{
    int score[3][3];
    int student_sum;
    int subject_sum[3] = {0, 0, 0};
    int total_sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        student_sum = 0;

        for (int j = 0; j < 3; j++)
        {
            student_sum += score[i][j];
            subject_sum[j] += score[i][j];
        }

        total_sum += student_sum;

        for (int j = 0; j < 3; j++)
        {
            printf("%d ", score[i][j]);
        }

        printf("%d\n", student_sum);
    }

    for (int j = 0; j < 3; j++)
    {
        printf("%d ", subject_sum[j]);
    }

    printf("%d\n", total_sum);

    return 0;
}