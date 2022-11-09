#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int n,y;
    scanf("%d", &n);
    y = sqrt(n);
    if(y*y == n){
        printf("%d", y);
    }
    else{
        printf("0");
    }
}