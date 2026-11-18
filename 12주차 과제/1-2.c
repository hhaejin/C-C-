#include <stdio.h>

struct Data{
    char name[20];
    char school[20];
    int grade;
};
int main(){
    struct Data p;

    scanf("%s",p.name);
    scanf("%s",p.school);
    scanf("%d",&p.grade);

    printf("Name : %s\n",p.name);
    printf("School : %s\n",p.school);
    printf("Grade : %d",p.grade);

    return 0;
}