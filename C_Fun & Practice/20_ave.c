# include <stdio.h>
float ave(float a, float b, float c) {
    return (a+b+c) / 3;
}
int main() {
    float num1, num2, num3;
    printf("enter 3 numbers to calculate their average\n");
    printf("note: separate the numbers using ',' comma\n");
    int c = scanf("%f, %f, %f", &num1, &num2, &num3);
    if (c == 3) {
        printf("the average of given values is %g\n", ave(num1, num2, num3));
    }
    else {
        printf("enter only numbers\n");
    }
    return 0;
}
