//https://tlx.toki.id/problems/mikroskil-cp-2014-penyisihan/D
#include <stdio.h>

int main(){
    int a, b,div = 0;
    scanf("%d %d", &a, &b);
    for(int i = 2; i<=a && i<=b;i++){
        if(a%i == 0 && b%i == 0){
            div = i;
        }
    }
    if(div!=0){
        printf("%d %d", a/div, b/div);
    }
    else{
        printf("Tidak");
    }
}