# include <stdio.h>
int main() {
    float h, r, volume;
    printf("enter the radius & height of cylinder\n");
    scanf("%f,%f", &h, &r);
    volume = 3.14159*r*r*h;
    printf("the volume of cylinder is %g\n", volume);
    return 0;
}
