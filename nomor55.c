//https://www.hackerrank.com/contests/praktikum-modul-4-patp-2022/challenges/hitung-nilai-palindrom
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min (int a, int b){
    if (a < b) return a;
    else return b;
}

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    char str[22], strTesPalindrom[22];
    scanf("%s", &str);
    strcpy(strTesPalindrom, str);
    int len = strlen(str);
    for (int i=0; i<len/2; i++){
        swap(&strTesPalindrom[i], &strTesPalindrom[len - 1 - i]);
    }
    if (strcmp(str, strTesPalindrom) == 0){
        printf("%s merupakan palindrom\n", str);
    }else {
        int selisih=0;
        for (int i=0; i<len/2; i++){
            selisih += min(abs(str[i]-str[len-1-i]), abs(str[len-1-i]-str[i]));
        }
        printf("%d\n", selisih);
    }
    
    return 0;
}