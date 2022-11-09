//https://www.hackerrank.com/contests/praktikum-modul-0-dan-1-patp-2022/challenges/urutin-dong-1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && y > z){
        printf("%d %d %d", x, y, z);
    }else if (x > z && z > y){
        printf("%d %d %d", x, z, y);
    }else if (y > x && x > z){
        printf("%d %d %d", y, x, z);
    }else if (y > z && z > x){
        printf("%d %d %d", y, x, z);
    }else if (z > x && x > y){
        printf("%d %d %d", z, x, y);
    }else{
        printf("%d %d %d", z, y, x);
    }
    return 0;
}

