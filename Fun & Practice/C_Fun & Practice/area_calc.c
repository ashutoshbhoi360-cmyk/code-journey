#include <stdio.h>
int main() {
    float l, b, area;
    printf("Enter the length and breadth: ");
    scanf("%f, %f", &l, &b);
    area = l * b;
    printf("Area = %g\n", area);
    return 0;
}
