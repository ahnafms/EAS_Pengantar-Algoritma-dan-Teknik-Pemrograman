//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-3:-Fungsi-dan-Rekursi(nomor 1)
#include <stdio.h>

int fact(int a){
    if(a == 1) return 1;
    return (a * (fact(a-1)));
}

int main(){
    int a;
    scanf("%d", &a);
    fact(a);
    printf("%d", fact(a));
}
