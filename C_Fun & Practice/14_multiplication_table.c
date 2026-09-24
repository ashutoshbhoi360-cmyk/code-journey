# include <stdio.h>
int main() {
    int n;
    printf("enter a number to print it's table\n");
    int check = scanf("%d", &n);
    if (check) {
        for (int i = 1; i <= 10; i++) {
            printf("%d × %d = %d \n", n, i, n * i);
        }
    }
    else {
        printf("please enter a number only");
    }
    return 0;
}
