#include <stdio.h>

int main() {
    char ch; //inisialisasi variabel

    for (ch = 'A'; ch <= 'Z'; ch++){ //jadi ini di set dulu startnya sama selesainya, ch = 'A' itu startnya, ch = 'Z' itu batas nya atau berakhirnya harus sampe Z, terus makanya di ch++ biar nambah terus dari a ke b ke c ke d dst.
        printf("%c\n", ch);
    }
    
return 0;
}