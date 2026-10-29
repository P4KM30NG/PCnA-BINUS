#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    int month;
    int year;
    int currentYear;
    FILE *fp;

    printf("=== HANYA BEKERJA DENGAN TAHUN >= 2000! ===\n");
    printf("Masukkan Tahun Sekarang (YY): "); scanf("%d", &currentYear);

    fp = fopen("dataEmployee.txt", "r");

    if (fp == NULL){
        printf("File Tidak bisa dibuka\n");
        exit(1);
    }

    int i = 0, j = 0, k = 0, l = 0, m = 0;
    int currentYear_calc = currentYear + 2000;
    while(!feof(fp))
    {
        fscanf(fp, "%d/%d/%d\n",&day,&month,&year);
        if (year > currentYear){
            year += 1900;
        } else {
            year += 2000;
        }
        int ageCalc = currentYear_calc - year;
        int age = abs(ageCalc);
        
            if (age > 51){
                i++;
            } else if (age >= 44 && age <= 51){
                j++;
            } else if (age >= 36 && age <= 43){
                k++;
            } else if (age >= 28 && age <= 35){
                l++;
            } else if (age < 28){
                m++;
            } else {
                printf("Error");
                return 0;
            }
    }

    printf("Over age 51: %d\n",i);
    printf("between age 44 and 51: %d\n",j);
    printf("between age 36 and 43: %d\n",k);
    printf("between age 28 and 35: %d\n",l);
    printf("under age 28: %d\n",m);

    fclose(fp);

    return 0;
}