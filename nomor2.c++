//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-1:-Percabangan (nomor 1)
#include <stdio.h>

int main()     
{  
    int a, b, c, d = 0;
    printf("Cek angka armstrong ");
    scanf("%d", &a);
    b = a;

    bool flag = true;
    if  (10 > b > 0){
        flag = false;
        d = a;
    }
    if (b > 10){ //mencari angka satuan
        c = b % 10;
        b = b / 10;
        d = c*c*c;
    }
    if (b > 10){ //mencari angka puluhan
        c = b % 10;
        b = b / 10;
        d += c*c*c;
    }
    if (b > 10){ //mencari angka ratusan
        c = b % 10;
        b = b / 10;
        d += c*c*c;
    }
    if (flag == true){ 
        d += b*b*b;
    }
    if (d == a){ 
        printf("Merupakan bilangan armstrong");
    }
    else{
        printf("Bukan Merupakan bilangan armstrong");
    }
    return 0;
}


