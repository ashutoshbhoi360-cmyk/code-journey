# include <stdio.h>
int main() {
    int dd, dr;
    // remember: dd means dividend & dr means divisor here
    printf("enter the number that you want to check whether the number is divisible by second number and enter the second number also separating using comma.\n");
    printf("if output of program is 0 that means the first number isn't divisible by second number\n");

    printf("please make sure the order of entry is dividend, divisor\n");
    scanf("%d, %d", &dd, &dr);
    printf("%d", dd%dr == 0);
    return 0;
}
