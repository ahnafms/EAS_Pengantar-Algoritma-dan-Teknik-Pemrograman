/* Carilah nilai minimum dari n angka*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int min= 99999;
    for(int j=0; j<n;j++){
        if(min>arr[j]){
            min = arr[j];
        }
    }
    printf("%d", min);
}