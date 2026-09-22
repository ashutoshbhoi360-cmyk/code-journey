# include <stdio.h>
int main() {
    float mark;
    printf("please enter the marks out of 100 to check whether they are enough to pass or not\n");
    scanf("%f", &mark);
    if (mark >= 0 && mark <= 100) {
        if (mark >= 33) {
            printf("this mark is enough to pass!\n");
        }
        else {
            printf("this mark is lower than the passing mark. the candidate should do hard work for the next exam\n");
        }
    }
    else {
        printf("invalid marks! marks can't be less than 0 or more than 100\n");
    }
    return 0;
}
