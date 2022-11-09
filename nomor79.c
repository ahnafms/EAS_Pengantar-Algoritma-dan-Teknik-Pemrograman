//https://tlx.toki.id/problems/bnpchs-2018-penyisihan/A
#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int n,k;
    for(int i = 0; i<t; i++){
        scanf("%d %d", &n, &k);
        if(n%(k+1) == 0){
            printf("Kasus #%d: ya\n", i+1);
        }
        else{
            printf("Kasus #%d: tidak\n", i+1);
        }
    }
}
