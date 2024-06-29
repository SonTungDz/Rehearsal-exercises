#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

double distance(const Point A, const Point B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
}

int main() {
    Point A, B;

    printf("Enter coordinates of point A (x, y): ");
    scanf("%lf %lf", &A.x, &A.y);

    printf("Enter coordinates of point B (x, y): ");
    scanf("%lf %lf", &B.x, &B.y);

    double dist = distance(A, B);

    printf("Distance between A and B: %f\n", dist);

    return 0;
}
