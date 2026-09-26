# include <stdio.h>
float ctf(float c) {
    return c * 1.8 + 32;
}
int main() {
    float cel;
    printf("enter the temperature in celsius\n");
    int check = scanf("%f", &cel);
    if (check) {
        printf("%g celsius = %g fahrenheit\n", cel, ctf(cel));
    }
    else {
        printf("please enter a number only\n");
    }
    return 0;
}
