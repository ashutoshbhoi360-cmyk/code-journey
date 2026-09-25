# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main() {
    int points = 0, total_points = 0, play_game = 1;
    srand(time(0));
    do {
        int comp = (rand() % 100) + 1;
        int chance = 6;
        int user;
        points = 0;
        do {
            printf("enter number\n");
            int check = scanf("%d", &user);
            if (check) {
                if (user == comp) {
                     points = (chance+1) * 2;
                    printf("you did it, you found the number in turn  %d and got %d points\n", 7-chance, points);
                    break;

                }
                 else if (user > comp) {
                    chance--;
                    printf("your number is higher then the computer's number and you have %d chance to find now\n", chance);
                }
                else if (user < comp) {
                    chance--;
                     printf("your number is lower then the computer's number and you have %d chance to find the number\n", chance);
                }
            }
            else {
                printf("please enter a number only\n");
                while (getchar() != '\n');
            }
        } while (user != comp && chance != 0);
        if (user != comp) {
            printf("game over, the secret number was %d\n", comp);
        }
        total_points += points;
        int check = 0;
        while (check == 0) {
            printf("Enter a non-zero number to start the game from starting, else enter a zero.\n");
            check = scanf("%d", &play_game); 
            if (check == 0) {
                printf("please enter a number only\n");
                while (getchar() != '\n');
            } }
        if (play_game == 0) {
            printf("your current score is %d \n", total_points);
        break;
        }
    } while (play_game != 0);
    return 0;
}
