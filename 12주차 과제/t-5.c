#include <stdio.h>

struct Student {
    char name[20];
    int score[3];
    int total;
};

void input(struct Student arr[], int n){
    for (int i = 0; i < n; i++){
        scanf("%s", arr[i].name);

        arr[i].total = 0;

        for (int j = 0; j < 3; j++){
            scanf("%d", &arr[i].score[j]);
            arr[i].total += arr[i].score[j];
        }
    }
}

void sort(struct Student arr[], int n){
    struct Student temp;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i].total < arr[j].total){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void output(struct Student arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%s ", arr[i].name);

        for (int j = 0; j < 3; j++){
            printf("%d ", arr[i].score[j]);
        }

        printf("%d\n", arr[i].total);
    }
}