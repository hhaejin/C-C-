#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d",&num);
    printf("%d\n",num);

    if (num<0) {
        printf("minus");
    }

    return 0;
}