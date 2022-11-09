//https://www.hackerrank.com/contests/praktikum-modul-3-patp-2022/challenges/3-itu-prima
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void cek(long long int arr[]){
    int i;

    for (int i = 0; i<3; i++){  
        int flag = 1;
        for(int j = 2; j*j <= arr[i];j++){
            if (arr[i] % j == 0){
                flag = 0;
                break;
           }
        }
        if(flag==0){
            printf("%lld bukan bilangan prima\n", arr[i]);
        }else{
            printf("%lld adalah bilangan prima\n", arr[i]);
        }
    }
}

int main() {
    long long int arr[3],i;
    scanf("%lld %lld %lld", &arr[0], &arr[1],&arr[2]);
    
        cek(arr);
    return 0;
}

