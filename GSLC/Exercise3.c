#include <stdio.h>
/*3. Create an application using array of structure to input 5 car
types, and display them on the screen*/
struct automobile {
int year;
char model[8];
int engine_power;
float weight;
};

int main()
{
    struct automobile AM[5];
    for (int i = 0; i < 5; i++){
    printf("INPUT AUTOMOBILE [%d]\n", i+1);
    printf("Please input model Year: "); scanf(" %d", &AM[i].year);
    printf("Please input model Type: "); scanf(" %s", &AM[i].model);
    printf("Please input model Power (HP): "); scanf(" %d", &AM[i].engine_power);
    printf("Please input model Weight (KG): "); scanf(" %f", &AM[i].weight);
    }

    for (int j = 0; j<5; j++){
        printf("AUTOMOBILE [%d]: \n", j+1);
        printf("%d %s, with %d horsepower and a weight of %.2f Kilograms\n", AM[j].year, AM[j].model, AM[j].engine_power, AM[j].weight);
    }

    return 0;
}