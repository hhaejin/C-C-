#include <stdio.h>

struct Data{
    char name[30];
    int height;
};
int main(){
    struct Data one={"Gildong",155};
    struct Data two={"Sujin",149};
    struct Data three={"Yejun",163};

    scanf("%s %d",one.name,&one.height);
    scanf("%s %d",two.name,&two.height);
    scanf("%s %d",three.name,&three.height);

    printf("%s : %dcm\n",one.name,one.height);
    printf("%s : %dcm\n",two.name,two.height);
    printf("%s : %dcm",three.name,three.height);

    return 0;
}