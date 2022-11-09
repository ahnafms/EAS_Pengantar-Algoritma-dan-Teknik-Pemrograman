//https://www.hackerrank.com/contests/praktikum-modul-4-patp-2022/challenges/sagitiga
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int N;

void printL(int a, int b){
    if (a > N) return;
    if (a < b )printf(" ");
    else  printf("*");
    printL(a+1, b);
}

void print(int a, int b){
    if (a > N) return;
    printL(1, b); printf("\n");
    print(a+1, b-1);
}

int main() {
    scanf("%d", &N);
    print(1, N);
    return 0;
}   