#include <stdio.h>
/*4. Create a program to input 5 students data and display students
with gpa >= 3.0 and gpa < 3.0 */
struct ipkmhs {
char nim[11];
char name[30];
float gpa;
};

int main(){
    struct ipkmhs s1[5];
for (int i = 0; i < 5; i++){
    printf("MASUKKAN DATA SISWA %d\n", i+1);
    printf("Masukkan NIM: "); scanf(" %s", s1[i].nim);
    printf("Masukkan Nama: "); scanf(" %[^\n]", s1[i].name);
    printf("Masukkan GPA: "); scanf("%f", &s1[i].gpa);
    printf("\n");
}

printf("Mahasiswa GPA diatas 3.0:\n");
for (int j = 0; j < 5; j++){
    if (s1[j].gpa >= 3){
        printf("%s\n", s1[j].name);
    } 
}
printf("Mahasiswa GPA dibawah 3.0:\n");
for (int j = 0; j < 5; j++){
    if (s1[j].gpa < 3){
        printf("%s\n", s1[j].name);
    } 

}
    return 0;
}