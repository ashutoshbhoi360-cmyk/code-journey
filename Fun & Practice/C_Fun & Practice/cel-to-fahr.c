# include <stdio.h>
int main() {
    float cel, fahr;
    printf("enter the temperature in celsius\n");
    scanf("%f", &cel);
    fahr = cel*1.8+32;
    printf("%g celsius = %g fahrenheit", cel, fahr);
    return 0;
}
