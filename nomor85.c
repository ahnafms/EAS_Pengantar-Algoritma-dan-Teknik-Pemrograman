//https://tlx.toki.id/problems/ideafuse-2014-icpc-sumatra-final/A
#include <stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
    
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    int n;
    for(int i = 0; i<t; i++){
        scanf("%d", &n);
        int arr[n];
        for(int j = 0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        quickSort(arr, 0, n-1);
        int profit = arr[n-1] - arr[0];
        printf("Case #%d: %d\n", i+1, profit);
    }
}