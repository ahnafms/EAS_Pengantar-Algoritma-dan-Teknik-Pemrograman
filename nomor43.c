#include <stdio.h>
int main(){
    long long int a, min= 1000000001, max = -1, temp;
    while(scanf("%lld", &temp) == 1){
        if(temp < min){
            min = temp;
        }
        if(temp > max){
            max = temp;
        }
    }
    printf("%lld", max - min);
}