#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, K, count=0,i;
    int I[10000], O[10000];
    scanf("%d%d", &N, &K);
    for (i = 0; i<N; i++){
        scanf("%d%d", &I[i], &O[i]);
    }
    for (i=0; i<N;i++){
        
        for(int j=0; j<=i;j++){
        if(i==0){
            count++;
        }else if(I[i]<O[j]){
            if(i == j){
                count++;
            }
            else{
            continue;  
            }
        }else if(I[i]>O[j]){
            count--;
        }else{
            count++;
        }
        }
    }
    if (count>K){
        printf("Macet");
    }
    else{
        printf("Lancar");
        }
    return 0;
}