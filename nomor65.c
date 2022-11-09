//https://www.hackerrank.com/contests/praktikum-modul-2-patp-2022/challenges/next-prime-number-1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, z,i;
    scanf("%d %d", &z, &n);
    int count = 0;
    while(count < n){
        int flag = 1;
        for(i = 2; i*i <= z;i++){
            if (z % i == 0){
                flag = 0;
                    break;
            }
        }
        if (flag == 1){
            printf("%d ", z);
            count++;
        }
        z++;
    }
    return 0;
}
