//https://www.hackerrank.com/contests/praktikum-modul-0-dan-1-patp-2022/challenges/gantiin-hurufnya-dong/problem
#include <stdio.h>
int main(){
    char huruf;
    int input;
    scanf("%c %d", &huruf, &input);
    if(huruf <= 'z' && huruf >= 'a'){
        if(input % 2 == 0){
            printf("%c\n", huruf);
        }else{
            printf("%c\n", huruf-32);
        }
    }
    else{
        if(input % 2 == 0){
            printf("%c\n", huruf);
        }else{
            printf("%c\n", huruf+32);
        }
    }
    return 0;
}