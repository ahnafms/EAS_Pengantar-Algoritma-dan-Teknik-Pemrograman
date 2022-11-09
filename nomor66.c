//https://www.hackerrank.com/contests/praktikum-modul-3-patp-2022/challenges/tebak-soal-ini-dong-d
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fpb(int a, int b){
    if(b != 0){
        return fpb(b, a % b);
    }
    else{
        return a;
    }
}

int main(){
    int a, b, c, ans1, ans2;
    scanf("%d %d %d", &a, &b, &c);
    ans1 = fpb(a, b);
    ans2 = fpb(b, c);
    int ans = ans1 + ans2;
    printf("%d", ans);
    return 0;
}
