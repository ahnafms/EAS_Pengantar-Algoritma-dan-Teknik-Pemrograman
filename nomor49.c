#include <stdio.h>

void swap(long int* a, long int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (long int arr[], long int low, long int high)
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

void quickSort(long int arr[], long int low, long int high)
{
    if (low < high)
    {
    
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int binser(long int arr[], long int left, long int right, long int x){
    while(left <= right){
        long int mid = (left + (right))/2;
        if (x == arr[mid]) {
            while(arr[mid-1]==x){
                mid--;
            }
            return mid;
        }
        if (x > arr[mid]) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main(){
    long int n;
    scanf("%li", &n);
    long int arr[n], history[100001]={0};
    for(int i = 0; i<100001; i++){
        history[i]=-1;
    }
    
    for(long int i = 0; i<n; i++){
        scanf("%li", &arr[i]);
        if(history[arr[i]] == -1){
            history[arr[i]] = i;
        }
    }
    quickSort(arr, 0, n-1);
    long int q;
    scanf("%li", &q);
    long int index[q];
    for(long int i = 0; i<q; i++){
        scanf("%li", &index[i]);
    }
    for(long int i = 0; i<q; i++){
        int result = binser(arr, 0, n-1, index[i]);
        if(result == -1){
            printf("-1\n");
        }
        else{
            index[i] = history[arr[result]];
            printf("%li\n", index[i]);
        }
    }
}