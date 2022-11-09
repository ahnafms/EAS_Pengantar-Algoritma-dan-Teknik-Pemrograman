//https://tlx.toki.id/problems/impl-sort/A/
#include <stdio.h>

void swap(long int* xp, long int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(long int arr[], long int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printArray(long int arr[], long int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%ld ", arr[i]);
        printf("\n");
    printf("\n");
}

int main(){
    long int n;
    scanf("%ld", &n);
    long int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%ld", &arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);

}