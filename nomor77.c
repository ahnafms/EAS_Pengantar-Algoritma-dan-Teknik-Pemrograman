//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-4:-Pointer-dan-Struct(nomor3)
#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void reverse(int arr[], int n){
    for(int i=0;i<n/2;i++){
        swap(&arr[i], &arr[n-1-i]);
    }
}

int main(){
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    reverse(arr,n);

    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}