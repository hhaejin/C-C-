#include <stdio.h>

struct Data{
    char name[21];
    int age;
};
int main(){
    struct Data one={"Gildong",15};
    struct Data two={"Sujin",13};
    struct Data three={"Yejun",12};

    scanf("%s %d",one.name,&one.age);
    scanf("%s %d",two.name,&two.age);
    scanf("%s %d",three.name,&three.age);

    printf("Name : %s\n",one.name);
    printf("Age  : %d\n",one.age);
    printf("Name : %s\n",two.name);
    printf("Age  : %d\n",two.age);
    printf("Name : %s\n",three.name);
    printf("Age  : %d",three.age);

    return 0;
}