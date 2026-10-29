#include <stdio.h>

int main() {

    int savings = 5000;
    float interestRate = 5.5f;
    printf("Your saving(s): %d\n", savings);
    float interest = savings * interestRate/100;
    printf("Your interest: %.2f\n", interest);
    float interestSaving = savings + interest;
    printf("Your savings after interest : %.2f\n", interestSaving);
}