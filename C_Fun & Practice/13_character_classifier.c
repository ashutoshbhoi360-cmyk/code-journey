# include <stdio.h>
int main() {
    char ch;
    printf("enter a character\n");
    scanf("%c", &ch);
    if (ch >= 65  && ch <= 90) {
        printf("this is a capital letter and it's ascii value is %d\n", ch);
    }
    else if (ch >= 97 && ch <= 122) {
        printf("this is a small letter and it's ascii value is %d\n", ch);
    }
    else if (ch >= 48 && ch <= 57) {
        printf("this is a number and it's ascii value is %d\n", ch);
    }
    else {
        printf("this is a special character and it's ascii value is %d\n", ch);
    }
    return 0;
}
