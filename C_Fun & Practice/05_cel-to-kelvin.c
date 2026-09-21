# include <stdio.h>
int main() {
    float cel, kelvin;
    printf("enter the temperature in celsius\n");
    scanf("%f", &cel);
    kelvin = cel + 273.15;
    printf("%g celsius = %.2f kelvin\n", cel, kelvin);
    return 0;
}
