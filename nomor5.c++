/* Carilah nilai maksimum dari n angka*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max= -1;
    for(int j=0; j<n;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    printf("%d", max);
}