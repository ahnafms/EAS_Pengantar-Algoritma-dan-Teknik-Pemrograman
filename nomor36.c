//https://tlx.toki.id/problems/impl-search/D
#include <stdio.h>
int main(){
    long int n;
    scanf("%ld", &n);
    long int arr[n];
    for(long int i = 0; i<n; i++){
        scanf("%ld", &arr[i]);
    }
    long int m;
    scanf("%ld", &m);
    long int arrL[m], arrR[m];
    for(long int i = 0; i<m; i++){
        scanf("%ld %ld", &arrL[i], &arrR[i]);
    }
    for(long int i = 0; i<m; i++){
        long int count = 0;
        for(long int j = 0; j<n; j++){
            if(arr[j] >= arrL[i] && arr[j] <= arrR[i]) count ++;
        }
        printf("%ld\n", count);
    }
}