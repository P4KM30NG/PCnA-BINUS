#include <stdio.h>

int main()
{    
    FILE *fp;
    int no;
    char name[20];
    float gpa;
    fp = fopen("text2.txt", "w");

     if (fp == NULL){
        printf("file fgets.c cant be opened");
        exit(1);
    }

    fprintf(fp,"%s, %d, %f\n", "dji", 15, 3.999);
    fprintf(fp, "%s, %d, %f\n", "zoa", 15, 3.57);

    

    fclose(fp);
    return 0;
}
