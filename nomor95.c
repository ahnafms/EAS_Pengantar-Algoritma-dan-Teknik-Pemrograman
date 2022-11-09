//https://tlx.toki.id/problems/toki-exercise-1/P01
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n ;i++){
        int result = 0;
        scanf("%d", &arr[i]);
        while(arr[i]>0){
            int a = arr[i]%10;
            result = result * 10 + a;
            arr[i] /= 10;
        }
        printf("%d\n", result);
    }
}