//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-3:-Fungsi-dan-Rekursi(nomor 2)
#include <stdio.h>

int recur(int n){
    if (n==1){
        return 1;
    }
    return n*n + recur(n-1);

}   
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", recur(n));
}