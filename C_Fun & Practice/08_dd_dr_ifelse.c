# include <stdio.h>
int main() {
    int dd, dr;
    // remember: dd means dividend & dr means divisor here
    printf("enter the number that you want to check whether the number is divisible by second number and enter the second number also separating using comma.\n");
    printf("please make sure the order of entry is dividend, divisor\n");
    scanf("%d, %d", &dd, &dr);
    if (dr != 0) {
        if (dd%dr == 0) {
            printf("yes, %d is divisible by %d\n", dd, dr);
        }
        else {
            printf("no, %d is not divisible by %d\n", dd, dr);
        }
    }
    else {
        printf("error, divisor can't be 0\n");
    }
    return 0;
}
