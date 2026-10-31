#include <stdio.h>

int main() {
    int num;
    int i = 1;

    scanf("%d", &num);

    while (i <= num){
        printf("%d",i);

        if(i < num){
            printf(" ");
        }

        i++;
    }

    printf("\n");

    return 0;
}