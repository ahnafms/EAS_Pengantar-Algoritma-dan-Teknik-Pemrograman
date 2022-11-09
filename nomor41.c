//https://tlx.toki.id/problems/toki-exercise-1/P08  
#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%lld", &arr[i]);
        arr[i] = (arr[i]*((arr[i]*arr[i])+1))/2;
    }
    for(int i = 0; i<n; i++){
        printf("%lld\n", arr[i]);
    }
}