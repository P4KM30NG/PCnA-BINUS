#include <stdio.h>

int main() {

    char name[00];
    char gender;
    printf("Name: ", name); scanf("%[^\n]", &name);
    printf("Gender: ", gender); scanf(" %c", &gender); //ditambah spasi sebelum %c karena di scanf sebelumnya ada \n meskipun tidak tertulis tapi akan muncul dan dibaca sebagai kaarkter
    printf("Hi %s, your gender is: %c\n", name, gender);

}

