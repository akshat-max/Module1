#include <stdio.h>
struct Point {
    int x;
    int y;
};

void swapPoints(struct Point *p1, struct Point *p2) {
    int tempX = p1->x;
    int tempY = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = tempX;
    p2->y = tempY;
}

int main() {
    struct Point point1, point2;

    printf("x-coordinate p1: ");
    scanf("%d", &point1.x);
    printf("y-coordinate p1: ");
    scanf("%d", &point1.y);

    printf("x-coordinate p2: ");
    scanf("%d", &point2.x);
    printf("y-coordinate p2: ");
    scanf("%d", &point2.y);

    swapPoints(&point1, &point2);
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
