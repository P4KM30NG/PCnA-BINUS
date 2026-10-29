#include <stdio.h>

int main() {

    int savings = 0;
    float interestRate = 0;
    printf("Your saving(s): ", savings); scanf("%d", &savings);
    printf("Your interest: ", interestRate);  scanf("%f", &interestRate);
    float interest = savings * interestRate/100;
    float interestSaving = savings + interest;
    printf("Your savings after interest : %.2f\n", interestSaving);
}

