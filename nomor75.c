//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-4:-Pointer-dan-Struct(nomor1)
#include <stdio.h>

void tambah(int x, int y, int *z){
    *z = x + y;
}
int main(){
    int a = 1, b = 2, c;
    tambah(a, b, &c);
    printf("%d", c);
    return 0;
}

