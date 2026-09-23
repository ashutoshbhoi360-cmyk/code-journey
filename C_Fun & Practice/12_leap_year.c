# include <stdio.h>
int main() {
    int y;
    printf("enter a year to check whether  the year is a leap year or not\n");
    int check = scanf("%d", &y);
    if (check) {
        if (y%4 == 0) {
            if (y % 100 == 0) {
                if (y%400 == 0) {
                    printf("%d is a leap year\n", y);
                }
                else {
                    printf("%d is a normal year\n", y);
                }
                }
            else {
                printf("%d is a leap year\n", y);
            }
        }
        else {
            printf("%d is a normal year\n", y);
        }
    }
    else {
        printf("please enter a number only\n");
    }
    return 0;
}
