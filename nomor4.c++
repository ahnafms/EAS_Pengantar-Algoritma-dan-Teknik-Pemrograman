//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-1:-Percabangan(nomor3)

#include <stdio.h>
#include <stdio.h>

int main()
{
    int l1, l2, l3, l4, l;
    printf("Masukkan bilangan biner 4 angka ");
    scanf("%d %d %d %d", &l1, &l2, &l3, &l4);
    l = l1 * 1000;
    l += l2 * 100;
    l += l3 * 10;
    l += l4;

    if (l == 0){
        printf("1 1 1 1 1 1 0");
    }else if (l == 1){
        printf("0 1 1 0 0 0 0");
    }else if (l == 10){
        printf("1 1 0 1 1 0 1");
    }else if (l == 11 ){
        printf("1 1 1 1 0 0 1");
    }else if (l == 100){
        printf("0 1 1 0 0 1 1");
    }else if (l == 101){
        printf("1 0 1 1 0 1 1");
    }else if (l == 110){
        printf("1 0 1 1 1 1 1");
    }else if (l == 111){
        printf("1 1 1 0 0 0 0");
    }else if (l == 1000){
        printf("1 1 1 1 1 1 1");
    }else if (l == 1001){
        printf("1 1 1 1 0 1 1");
    }else{
        printf("0 0 0 0 0 0 0");
    }
    return 0;
}