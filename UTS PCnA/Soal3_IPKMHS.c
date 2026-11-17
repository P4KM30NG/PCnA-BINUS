#include <stdio.h>
struct ipkmhs {
    char nim[11];
    char name[30];
    float gpa;
};

void tampil(FILE *out, struct ipkmhs s[])
{
    fprintf(out, "Mhs GPA >=2.5 : ");
        for (int i = 0; i < 5; i++) {
            if (s[i].gpa >= 2.5) {
                fprintf(out, "%s %s, ", s[i].nim, s[i].name);
            }
        }
        fprintf(out, "\nMhs GPA <2.5 : ");
        for (int i = 0; i < 5; i++) {
            if (s[i].gpa < 2.5) {
                fprintf(out, "%s %s, ", s[i].nim, s[i].name);
            }
    }
    fprintf(out, "\n");
}

int main() 
{
    struct ipkmhs s[5];
    int i = 0;
    while(i<5){
        printf("Masukkan NIM: "); scanf(" %10s", s[i].nim);
        printf("Masukkan Nama: "); scanf(" %29[^\n]", s[i].name);
        printf("Masukkan GPA: "); scanf("%f", &s[i].gpa);

        i++;
    }

   FILE *fp = fopen("NilaiMahasiswa.dat", "wb");  
    if (fp == NULL)
    {
        printf("File tidak bisa dibuka");
        return 1;
    }

fwrite(s, sizeof(struct ipkmhs), 5, fp);   
fclose(fp);

tampil(stdout, s);   
return 0;

}