#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main()
{
    struct Person p = {"Yejun", 12};
    struct Person f;

    scanf("%s %d", f.name, &f.age);

    printf("Your name: %s, age: %d\n", p.name, p.age);
    printf("Friend's name: %s, age: %d\n", f.name, f.age);

    return 0;
}