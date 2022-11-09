//https://www.hackerrank.com/contests/praktikum-modul-0-dan-1-patp-2022/challenges/ganti-huruf-dong
#include <stdio.h>
int main(){
    int a, b ,c ,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sisa = (a*b) - (c*d);
    printf("%d", sisa);
}