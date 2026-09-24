# include <stdio.h>
 int main() {
    int n, is_prime = 1;
    printf("enter a number to check whether the number is prime or not\n");
    int check = scanf("%d", &n);
    if (check) {
        if (n > 2) {
            for (int i = 2; i < n; i++) {
                if (n%i == 0) {
                    printf("the entered number is not a prime number\n");
                    is_prime = 0;
                    break;
                }
            }
        }
        else if (n == 2) {
            printf("the entered number is a prime number\n");
        }
        else {
            printf("this is a special number\n");
        }
        if (n > 2 && is_prime != 0) {
            printf("this is a prime number\n");
        }
    }
    else {
        printf("please enter a number only\n");
    }
    return 0;
}
