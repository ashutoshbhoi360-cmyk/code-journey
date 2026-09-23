# include <stdio.h>
int main() {
    float i;
    printf("enter the  annual income to calculate the income tax\n");
    int check = scanf("%f", &i);
    if (check) {
        if (i <= 150000){
            printf("tax = 0\n");
        }
        else if (i == 500000) {
            printf("tax = 35000\n");
        }
        else if(i > 150000 && i < 500000) {
            printf("tax = %g\n", (i-150000)*10/100);
        }
        else if (i > 500000) {
            printf("tax = %g\n", (i-500000)*20/100+35000);
        }
    }
    else {
        printf("please enter a number only\n");
    }
    return 0;
}
