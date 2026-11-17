#include <stdio.h>

struct ipkmhs {         
    char nim[11];
    char name[30];
    float gpa;
};

char tentukanGrade(float gpa)
{
    if (gpa >= 3.5)      return 'A';
    else if (gpa >= 3.0) return 'B';
    else if (gpa >= 2.5) return 'C';
    else                 return 'D';
}

void tampil(FILE *out, struct ipkmhs s[], char grade[], int n)
{
    for (int i = 0; i < n; i++) {
        fprintf(out, "%s %s %.2f %c\n", s[i].nim, s[i].name, s[i].gpa, grade[i]);
    }
}

int main()
{
    struct ipkmhs s[5];
    char grade[5];

    FILE *fin = fopen("NilaiMahasiswa.dat", "rb");
    if (fin == NULL)
    {
        printf("File NilaiMahasiswa.dat tidak ditemukan.");
        return 1;
    }
    int n = fread(s, sizeof(struct ipkmhs), 5, fin);   
    fclose(fin);

    for (int i = 0; i < n; i++) {
        grade[i] = tentukanGrade(s[i].gpa);
    }

    FILE *fout = fopen("GradeMahasiswa.dat", "w");
    if (fout == NULL)
    {
        printf("File tidak bisa dibuka");
        return 1;
    }
    tampil(fout, s, grade, n);
    fclose(fout);

    tampil(stdout, s, grade, n);

    return 0;
}