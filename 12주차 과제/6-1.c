#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main(){
    struct Point p1, p2;

    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);

    printf("Center point = (%.1f, %.1f)\n",
        (p1.x + p2.x) / 2.0,
        (p1.y + p2.y) / 2.0);

    return 0;
}