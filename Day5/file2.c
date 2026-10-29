#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i;

    char ss[80] = "This statement is saved to text.txt using fputc";

    fp = fopen("text.txt", "w");

    if (fp == NULL)
    {
        printf("Gagal dibuat filenya\n");
    }

    for (i = 0; i < strlen(ss); i++)
    {
        fputc(ss[i], fp);
    }
    return 0;
}
