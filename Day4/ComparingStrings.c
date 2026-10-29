#include <stdio.h>
#include <string.h>

int main() 
{
    char c1[100];
    char c2[100];

    printf("Input Your first String to be compared!: "); scanf("%[^\n]", &c1);
    printf("Input Your second String to be compared!: "); scanf(" %[^\n]", &c2);

    if(strcmp(c1, c2) == 0)
    {
        printf("Both strings are equal!");
    } else if (strcmp(c1, c2) < 0)
    {
        printf("The first string is smaller than the second string!");
    } 
     else {
        printf("The first string is greater than the second string!");
    }
    
    
    

}