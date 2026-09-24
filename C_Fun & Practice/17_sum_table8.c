# include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i * 8;
    }
    printf("the sum is %d\n", sum);
    return 0;
}
