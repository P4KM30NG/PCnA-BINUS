#include <stdio.h>

int main()
{
    // FILE *stream;

    // char *p, buffer[] = "This is the line of output\n";
    // int ch = 0;

    // stream = stdout;
    // for(p=buffer; (ch != EOF) && (*p != '\0'); p++)
    //     ch = putc(*p,stream);
    // return 0;
    FILE *fp;
    char ch;
    fp = fopen("fgetc.c", "r");

    if (fp == NULL){
        printf("file fgetc.c cant be opened");
        //exit(1);
    }

    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }


    fclose(fp);
    return 0;
}
