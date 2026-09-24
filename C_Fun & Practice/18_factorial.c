# include <stdio.h>
int main() {
    long long fact = 1;
    int n;
    printf("enter the number to calculate the factorial\n");
    int check = scanf("%d", &n);
    if (check) {
        if (n < 0) {
            printf("factorial doesn't exist for negative numbers\n");
        }
        else {
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
            printf("the factorial is %lld\n", fact);
        }
    }
    else {
        printf("please enter a number only\n");
    }
    return 0;
}
