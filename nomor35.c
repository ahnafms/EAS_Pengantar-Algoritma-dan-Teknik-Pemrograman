//https://tlx.toki.id/problems/toki-exercise-1/P27
#include <stdio.h>

void swap(long long int* a, long long int* b){
long long int t = *a;
*a = *b;
*b = t;
}

int partition (long long int arr[], long long int low, long long int high){
    long long int pivot = arr[high]; 
    long long int i = (low - 1); 
    for (int j = low; j <= high - 1; j++){
        if (arr[j] < pivot){
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(long long int arr[], long long int low, long long int high){
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    long long int n, i;
    scanf("%lld", &n);
    long long int arr[n], count = 0;
    for(int i = 0; i<n; i++){
        scanf("%lld", &arr[i]);
    }
    quickSort(arr, 0, n-1);
    long long int atm = 0;
    for(int i = n-1; i>= 0; i--){
        count += arr[i] + 1;
        atm++;
        if(count >= n){
            break;
        }
    }
    printf("%d", atm);
}
