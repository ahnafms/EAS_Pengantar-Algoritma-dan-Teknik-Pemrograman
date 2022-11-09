//https://www.geeksforgeeks.org/quick-sort/
#include <stdio.h>

void swap(long long int* a, long long int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (long long int arr[], long long int low, long long int high)
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

void quickSort(long long int arr[], long long int low, long long int high)
{
    if (low < high)
    {
    
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%lld", &arr[i]);
    }
    quickSort(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        printf("%lld\n", arr[i]);
    }
}