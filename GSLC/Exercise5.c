#include <stdio.h>
/*5. Create a program (not using array) to receive input for
studentScore struct and then display nim, name, subjectCode,
sks, and grade. */

struct studentScore {
    char nim[11];
    char name [30];
    char subjectCode [5];
    int sks;
    char grade;
};

int main(){
    struct studentScore s1;

    printf("Masukkan Nim: "); scanf("%s", s1.nim);
    printf("Masukkan Nama: "); scanf(" %[^\n]", s1.name);
    printf("Masukkan kode pelajaran: "); scanf(" %s", s1.subjectCode);
    printf("Masukkan jumlah SKS: "); scanf(" %d", &s1.sks);
    printf("Masukkan grade: "); scanf(" %d", &s1.grade);

    printf("Jadi ini adalah datamu!\n%s | %s | %s | JUMLAH SKS: %d | NILAI: %d\n", s1.nim, s1.name, s1.subjectCode, s1.sks, s1.grade);

    return 0;
}