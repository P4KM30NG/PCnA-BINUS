#include <stdio.h>

int main()
{    
    FILE *fp;
    int Arr[5] = {1,2,3,4,5};
    fp = fopen("text3.dat", "rb");

     if (fp == NULL){
        printf("file text3.dat cant be created");
        return 0; //close program
    }

    fread(Arr, sizeof(Arr), 1, fp);

    for(int i = 0; i < 5; i++){
        printf("%d", Arr[i] );
    }

    fclose(fp);
    return 0;
}
