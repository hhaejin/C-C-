#include <stdio.h>

struct Student {
    char name[20];
    int score;
};

int main(){
    struct Student s[5];
    int max = 0;
    int index = 0;

    for (int i = 0; i < 5; i++){
        scanf("%s %d", s[i].name, &s[i].score);
    }

    for (int i = 0; i < 5; i++){
        if (s[i].score > max){
            max = s[i].score;
            index = i;
        }
    }

    printf("%s %d\n", s[index].name, s[index].score);

    return 0;
}