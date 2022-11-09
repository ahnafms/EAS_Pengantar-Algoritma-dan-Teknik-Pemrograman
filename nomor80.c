//https://tlx.toki.id/problems/osn-2007/3A
#include <stdio.h>
int main(){
    long long int n, k;
    scanf("%li %li", &n, &k);
    long long int atm = 0, total=0;
    long long int cont = ((n-1)/k) + 1;
    for(long long int i = 0; i<cont ; i++){
        long long int temp, max = -1;
        for(long long int j = 0; j<k; j++){
            scanf("%d", &temp);
            if(temp > max){
                max = temp;
            }
        }
        total += max;
    }
    if(n/k>1){
        printf("%d", total+2+(cont));
    }
    printf("%d", total+2);
}