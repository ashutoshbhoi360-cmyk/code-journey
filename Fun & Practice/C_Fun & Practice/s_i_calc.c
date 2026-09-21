# include <stdio.h>
int main() {
    float p, r, t, i;
    printf("please enter the principal amount, interest in percentage & time in years.\n");
    printf("make sure the order of entry is  principal, interest rate & time.\n");
    printf("note: separate principal, interest rate & time with commas, otherwise the result will be wrong.\n");
    scanf("%f, %f, %f", &p, &r, &t);
    i = (p*r*t)/100.0;
    printf("simple interest is %g & total amount to gain or pay: %g.\n", i, p+i);
    return 0;
}
