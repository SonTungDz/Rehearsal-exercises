#include <stdio.h>

typedef struct {
    double x, y;
} Point;

int main() {
    Point lowerLeft, upperRight;

    printf("Enter coordinates of lower left endpoint (x, y): ");
    scanf("%lf %lf", &lowerLeft.x, &lowerLeft.y);

    printf("Enter coordinates of upper right endpoint (x, y): ");
    scanf("%lf %lf", &upperRight.x, &upperRight.y);

    if (lowerLeft.x > upperRight.x || lowerLeft.y > upperRight.y) {
        printf("Invalid\n");
        return 0;
    }

    Point point;

    printf("Enter coordinates of a point (x, y): ");
    scanf("%lf %lf", &point.x, &point.y);

    if (point.x >= lowerLeft.x && point.x <= upperRight.x && point.y >= lowerLeft.y && point.y <= upperRight.y) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
