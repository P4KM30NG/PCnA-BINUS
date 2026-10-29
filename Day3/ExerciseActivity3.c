#include <stdio.h>

int main(){
    float ipkScore;
    printf("Masukkan IPK-Mu: ", ipkScore); scanf("%f", &ipkScore);

    
    if (ipkScore >= 3.5 && ipkScore <= 4.0){
        printf("Cumlaude");
    } else if (ipkScore >= 3.0 && ipkScore <= 3.4) {
        printf("Outstanding");
    } else if (ipkScore >= 2.5 && ipkScore <= 2.9) {
        printf("Very Good"); 
    } else if (ipkScore >= 2.0 && ipkScore <= 2.4) {
        printf("Good"); 
    } else if (ipkScore < 2.0){
        printf("Poor");
    } else {
        printf("IPK yang dimasukkan diluar rentang!");
    }
    
    return 0;
} 