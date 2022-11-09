//https://tlx.toki.id/problems/toki-exercise-1/P14
#include <stdio.h>
#include <math.h>

int main(){
    long int n;
    scanf("%ld", &n);
    int power = 18, count = 0, arr[19]={0};
    while(n>0){
        while(pow(3, power) > n)power--;
        arr[power]=(long int)pow(3,power);
        count++;
        n = n % arr[power];
    }
    printf("%ld\n", count);
    for(int i = 0; i<19; i++){
        if(arr[i]!=0) printf("%ld ", arr[i]);
    }
}