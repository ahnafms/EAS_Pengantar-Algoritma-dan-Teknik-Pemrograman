//https://tlx.toki.id/problems/impl-search
#include <stdio.h>

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
    long int arr[n];
    for(long int i = 0; i<n; i++){
        scanf("%li", &arr[i]);
    }
    long int q;
    scanf("%li", &q);
    long int index[q];
    for(long int i = 0; i<q; i++){
        scanf("%li", &index[i]);
    }
    long int ans[q];
    for(long int i = 0; i<q; i++){
        int result = binser(arr, 0, n-1, index[i]);
        if(result == -1){
            ans[i] = -1;
            printf("%li\n", ans[i]);
        }
        else{
            ans[i] = result;
            printf("%li\n", ans[i]);
        }
    }
}