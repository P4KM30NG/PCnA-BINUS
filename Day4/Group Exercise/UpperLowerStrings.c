#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Input your string here! maximum 100 words: "); scanf("%[^\n]",&s);
    
    printf("The Lowercase version of the string is: %s\n", strlwr(s));
    printf("The Uppercase version of the string is: %s\n", strupr(s));
    return 0;
}