# include <stdio.h>
int main() {
    float r, area;
    printf("enter the radius of circle\n");
    scanf("%f", &r);
    area = 3.14159*r*r;
    printf("the area of circle is %g\n", area);
    return 0;
}
