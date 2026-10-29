#include <stdio.h>
//1. Create a structure with the following definition
struct Address{
    char streetName[50];
    int streetNumber;
    char city[20];
    char province[20];
};

struct Dateof_Birth{
    int date;
    int month;
    int year;
};

struct student{
    char studentNumber[20];
    char studentName[120];
    struct Address address; //manggil structure Address terus ngasi alias
    char studentBirth_place[40];
    struct Dateof_Birth DOB; //manggil structure DateofBirth terus ngasi alias
};


int main() //2. Take user 5 student data
{
    struct Address add[4];
    struct Dateof_Birth dob[3];
    struct student stdnt[5];
    int i;
    int j;

    for (i=0; i<5; i++){
        printf("MASUKKAN DATAMU SISWA KE [%d]\n", i+1);

    printf("Masukkan NIM: "); scanf("%s", &stdnt[i].studentNumber);
    printf("Masukkan Nama: "); scanf(" %[^\n]", &stdnt[i].studentName);
    printf("Masukkan Nama Jalan: "); scanf(" %s", &stdnt[i].address.streetName);
    printf("Masukkan angka Jalan: "); scanf(" %d", &stdnt[i].address.streetNumber);
    printf("Masukkan Kota: "); scanf(" %s", &stdnt[i].address.city);
    printf("Masukkan Provinsi: "); scanf(" %[^\n]", &stdnt[i].address.province);
    printf("Masukkan Tanggal Lahir: "); scanf(" %d", &stdnt[i].DOB.date);
    printf("Masukkan Bulan (angka) Lahir: "); scanf(" %d", &stdnt[i].DOB.month);
    printf("Masukkan Tahun Lahir: "); scanf(" %d", &stdnt[i].DOB.year);
    printf("\n");
    }
    
    
    for (j=0; j<5; j++){
        printf("DATA SISWA KE [%d]\n", j+1);
    
    printf("%s\n", stdnt[j].studentNumber);
    printf("%s\n", stdnt[j].studentName);
    printf("%s\n", stdnt[j].address.streetName);
    printf("%d\n", stdnt[j].address.streetNumber);
    printf("%s\n", stdnt[j].address.city);
    printf("%s\n", stdnt[j].address.province);
    printf("%d\n", stdnt[j].DOB.date);
    printf("%d\n", stdnt[j].DOB.month);
    printf("%d\n", stdnt[j].DOB.year);
    printf("\n");
    }

    return 0;
}