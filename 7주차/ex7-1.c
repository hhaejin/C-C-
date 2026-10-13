#include <stdio.h>

int main() {
    int num = 10;
    int *pnum;

    pnum = &num;

    printf("*(pnum++)= %d \n",*(pnum++));

    return 0;
}