/* this program calculates the sum of first 10 natural numbers.
the numbers are hard coded because the program calculates (first 10 natural numbers) */
# include <stdio.h>
int main() {
    int s = 0;
    for (int i = 1; i <= 10; i++) {
        s += i;
    }
    printf("the sum is %d\n", s);
    return 0;
}
