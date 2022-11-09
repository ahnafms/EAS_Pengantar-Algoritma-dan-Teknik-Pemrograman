//https://tlx.toki.id/problems/mikroskil-cp-2014-final/G
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%lld", &arr[i]);
        int temp = sqrt(arr[i]);
        arr[i] = temp;
    }
    for(int i = 0; i<n; i++){
        printf("%lld^2 = %lld\n", arr[i], arr[i]*arr[i]);
    }
}