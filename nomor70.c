//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-2:-Perulangan,-Array,-dan-String(nomor2)
#include <stdio.h>

int main(){
    int input, genap, i;
    scanf("%d", &input);
    for (i = 1; i <= input; i++){
        genap = i % 2;
        if (genap == 0){
            printf("* ");
        }
        else{
            printf("%d ", i);
        }
    }
    return 0;
}