# include <stdio.h>
int main() {
    int fact = 1;
    int n;
    printf("enter the number to calculate the fact\n");
    int check = scanf("%d", &n);
    if (check) {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("the factorial is %d\n", fact);
    }
    else {
        printf("please enter a number only");
    }
    return 0;
}
