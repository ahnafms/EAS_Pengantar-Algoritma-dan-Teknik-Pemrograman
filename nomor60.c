//https://www.hackerrank.com/contests/praktikum-modul-2-patp-2022/challenges/anti-vokal
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char vokal[]={'A', 'a', 'I','i', 'U', 'u', 'E', 'e', 'O', 'o'}, input[1000];
    gets(input);
    int length = strlen(input);
    for (int i=0; i<length; i++){
        int flag = 1;
        for (int j = 0;j<10;j++){
            if (vokal[j] == input[i]){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
        printf("%c", input[i]);
            }
    }
    return 0;
}
