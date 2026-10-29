#include <stdio.h>
#include <string.h>

int main() {
int guess;
int number = 42;
char statement[3];
int condition;

printf("I'm thinking of a number! Try to guess the number I'm thinking of: ", guess); scanf("%d", &guess);
while (1) {

if (guess == number){
    int condition = 0;
} else if (guess > number) {
    int condition = 1;
} else if (guess < number) {
    int condition = -1;
} else {
    printf("Error\n");
    break;
}

switch(condition)
{
case 0:
    printf("thats it!");
    break;

case 1:
    printf("Guess Lower!");
    break;

case -1:
    printf("Guess Higher!");
    break;

default: 
    printf("Error");
    break;
}

printf("Would you like to play again? (yes/no) ", statement); scanf("%s", &statement);

if (strcmp(statement, "yes") ==0 )  {
    printf("I'm thinking of a number! Try to guess the number I'm thinking of: ", guess);
} else {
    printf("Thanks for playing!");
    break;
}

}
    return 0;
}