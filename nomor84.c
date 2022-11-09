//https://tlx.toki.id/problems/toki-exercise-1/P11/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    char str[201], strTesPalindrom[201];
    while(scanf("%s", str) != EOF){
        strcpy(strTesPalindrom, str);
        int len = strlen(str);
        for (int i=0; i<len/2; i++){
            swap(&strTesPalindrom[i], &strTesPalindrom[len - 1 - i]);
        }
        if (strcmp(str, strTesPalindrom) == 0){
            printf("%s ", str);
        }
    }
    printf("\n");
    return 0;  
}