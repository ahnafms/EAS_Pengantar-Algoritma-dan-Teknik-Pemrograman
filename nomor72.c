///https://github.com/AlproITS/DasarPemrograman/wiki/Modul-2:-Perulangan,-Array,-dan-String(nomor4)
#include <stdio.h>

int main(){
    int input, i;
    scanf("%d", &input);
    int list_num[input];
    for (i = 0; i < input; i++){
        scanf("%d", &list_num[i]);
    }
    for (i = input - 1; i >= 0; i--){
        printf("%d\n", list_num[i]);
    }
}