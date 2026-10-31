#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    if (num > 0) {
        printf("Input value : %d\n", num);
        printf("Positive number");
    }

    return 0;
}