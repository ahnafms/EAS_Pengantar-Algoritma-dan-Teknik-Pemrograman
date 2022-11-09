//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-2:-Perulangan,-Array,-dan-String(nomor1)
#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);
    input = input % 2;
    if (input == 0){
        printf("Genap");
    }
    else{
        printf("Ganjil");
    }
}