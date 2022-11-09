//https://www.hackerrank.com/contests/praktikum-modul-2-patp-2022/challenges/deret-aritmatika-atau-geometri-yaa/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c;
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%f %f %f", &a, &b, &c);
        if (b-(c-b)==a){
            printf("%.0f aritmatika\n", c+c-b);
        }else{
            printf("%.0f geometri\n", (c/b) * c);
        }
    }
    return 0;
}
