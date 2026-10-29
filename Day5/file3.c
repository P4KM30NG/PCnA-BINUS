#include <stdio.h>

int main()
{    
    FILE *fp;
    char ch[80];
    fp = fopen("fgets.c", "r");

    if (fp == NULL){
        printf("file fgets.c cant be opened");
        return 0; //close program
    }

    while (!fgets(ch,80,fp))
    {
       printf("%s", ch);
    }


    fclose(fp);
    return 0;
}
