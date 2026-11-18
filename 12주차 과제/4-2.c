#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main()
{
    struct Person p[5];
    int min = 999;
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d", p[i].name, &p[i].height);
    }

    for (int i = 0; i < 5; i++)
    {
        if (p[i].height < min)
        {
            min = p[i].height;
            index = i;
        }
    }

    printf("%s %d\n", p[index].name, p[index].height);

    return 0;
}