#include <stdio.h>

struct Rectangle
{
    int x1, y1;
    int x2, y2;
};

int main(){
    struct Rectangle a, b, result;

    scanf("%d %d %d %d", &a.x1, &a.y1, &a.x2, &a.y2);
    scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);

    if (a.x1 < b.x1)
        result.x1 = a.x1;
    else
        result.x1 = b.x1;

    if (a.y1 < b.y1)
        result.y1 = a.y1;
    else
        result.y1 = b.y1;

    if (a.x2 > b.x2)
        result.x2 = a.x2;
    else
        result.x2 = b.x2;

    if (a.y2 > b.y2)
        result.y2 = a.y2;
    else
        result.y2 = b.y2;

    printf("%d %d %d %d\n", result.x1, result.y1, result.x2, result.y2);

    return 0;
}