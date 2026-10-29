#include <stdio.h>
#include <string.h>

int main() {
int guess;
int number = 42;
char statement[3];
printf("I'm thinking of a number! Try to guess the number I'm thinking of: ", guess); 

while (1) {
    scanf("%d", &guess);
if (guess < number){
    printf("Too low! guess again: ");
} else if (guess > number) {
    printf("Too high! guess again: ");
} else if (guess == number){
printf("Thats it! would you like to play again? (yes/no): "); scanf("%s", &statement);

    if (strcmp(statement, "yes") == 0 ){
        printf("I'm thinking of a number! Try to guess the number I'm thinking of: ", guess); 
    } else {
        printf("Thanks for playing!");
        break;
    }
}
}

    return 0;
}