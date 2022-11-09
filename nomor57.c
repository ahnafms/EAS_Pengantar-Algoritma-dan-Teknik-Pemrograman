//https://www.hackerrank.com/contests/praktikum-modul-4-patp-2022/challenges/buatin-operasinya-dong
#include <stdio.h>
#include <math.h>
#include <string.h>

struct data_x
{
    char angka1[100];
    int bilangan;
};

struct data_y
{
    char angka2[100];
    char operand;
};

void penjumlahan(int x, int y){
    printf("%d + %d\n", x, y);
}

void pengurangan(int x, int y){
    printf("%d - %d\n", x, y);
}

int main(){
    int n, k;
    scanf("%d", &n);
    struct data_x x[n];
    for(int i = 0; i<n; i++){
        scanf("%s", x[i].angka1);
        scanf("%d", &x[i].bilangan);
    }
    scanf("%d", &k);
    char op;
    char angka[100];
    for(int j=0; j<k+1; j++){
        
        scanf("%s", angka);
        for(int a=0; a<n+1; a++){
            if(strcmp(angka, x[a].angka1)==0){
                printf("%d", x[a].bilangan);

                    printf(" ");
                
            }
        }
        getchar();
        if(j!=k){
            scanf("%c", &op);
            printf("%c ", op);
            getchar();
        }
        
    }
}